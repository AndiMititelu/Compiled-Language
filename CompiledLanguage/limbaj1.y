%{
#include <stdio.h>
#include <string.h>
#include "./source.h"

int yylex();

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}


%union{
    int intValue;
    float floatValue;
    char charValue;
    char stringValue[256];
}
%token BGIN END ASSIGN CLASS ACCESS CONST RETURN 
%token <stringValue> ID
%token <stringValue> CLASS_ID
%token <intValue> NR
%token <intValue> TIP
%token <intValue> VOID
%token <stringValue> WORD
%token <floatValue> FLT
%token <charValue> LETTER


%token AND OR LE GE EQ NEQ LS GR NOT PRINT
%token WHILE
%token IF ELSE FOR EVAL
%type <intValue> e
%type <intValue> aritm_expr
%type<stringValue> function_call
%start progr
%left AND OR NOT LE GE EQ NEQ LS GR
%left '+' '-' 
%left '*' '/'
%%
progr: {change_scope("global"); } /* mark the variable as global */
          declaratii {change_scope("main"); } bloc {printf("program corect sintactic\n");print_symbol_table_txt(); print_function_table_txt();}
     | bloc {printf("program corect sintactic\n"); print_symbol_table_txt(); print_function_table_txt();}
     ;

declaratii_clasa : class_member ';' declaratii_clasa 
                 | ACCESS ':' declaratii_clasa
                 | {}
                 ;

declaratii : global_declaratie ';'
           | declaratii global_declaratie ';'
           ;
                

global_declaratie : TIP ID {if(insert_symbol($1, $2)==-1) { printf("[global]invalid id name %s \n", $2); return -1;}}
               | TIP ID size 
               | class_declaration
               | CLASS_ID ID
               | CONST global_declaratie
               | function {change_scope("global");} 
               | procedure {change_scope("global");}
               | initialization
               | assignment
               ;

initialization: TIP ID ASSIGN aritm_expr {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol($1, $2); set_value_to_int($2, $4);}}
              | TIP ID ASSIGN WORD {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol($1, $2); set_value_to_string($2, $4);}}
              | TIP ID ASSIGN NR   {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol($1, $2); set_value_to_int($2, $4);}}

              | TIP ID ASSIGN LETTER    {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol($1, $2); set_value_to_char($2, $4);}}

              | TIP ID ASSIGN FLT  {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol($1, $2); set_value_to_float($2, $4);}}

              |TIP ID ASSIGN ID    {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol($1, $2); set_value_id($2, $4);}}
              ;

class_member : TIP ID {if(insert_symbol($1, $2)==-1) { printf("invalid id name %s \n", $2); return -1;}}
          | TIP ID size
          | CLASS_ID ID
          | CONST class_member
          | function 
          | procedure 
          ;

local_declaratie : TIP ID {if(insert_symbol($1, $2) == -1) { printf("invalid id name %s \n", $2); return -1;}} 
               | TIP ID size 
               | CLASS_ID ID
               | CONST local_declaratie
               ;

class_declaration : CLASS CLASS_ID {change_scope($2); }  '{' declaratii_clasa '}'
                  ;



size : '[' NR ']'
     | '[' NR ']' '[' NR ']'
     ;

array_position : ID '[' NR ']'
               | ID '[' NR ']' '[' NR ']'
               ;


      
/* bloc */
bloc : BGIN '{' list return ';' END '}' 
     | BGIN '{'  return ';' END '}'
     ;
     
/* lista instructiuni */
list : statement ';' 
     | list statement ';'
     ;

named_obj : array_position
          | ID '.' named_obj
          | array_position '.' named_obj
          |ID '.' ID
          ;

/* instructiune */

assignment : named_obj ASSIGN aritm_expr  
         | named_obj ASSIGN NR
         | ID ASSIGN aritm_expr { if(get_value_by_index($1) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_int($1, $3);}          
         | named_obj ASSIGN named_obj 
         | ID ASSIGN WORD {if(get_value_by_index($1) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_string($1, $3);}
         | ID ASSIGN NR  {if(get_value_by_index($1) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_int($1, $3);}
         | ID ASSIGN LETTER  {if(get_value_by_index($1) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_char($1, $3);}
         | ID ASSIGN FLT {if(get_value_by_index($1) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_float($1, $3);}
         | ID ASSIGN ID { if(set_value_id($1, $3)==-1) return -1;}
         | ID ASSIGN function_call
         ;

statement: assignment
         | initialization
         | function_call
         | local_declaratie
         | while
         | if_stmt
         | for_stmt
         | eval
         | PRINT '(' ID ')'  { if(check_scope("main") == 0) {if(get_value_by_index($3) == -1) return -1;  print($3); }}                          
         ;

function_call: ID{if(start_call($1)==-1) return -1;} '(' lista_apel ')' {end_call(); strcpy($$, $1);}

return : | RETURN NR  
         | RETURN ID {if(get_value_by_index($2) == -1) return -1; }
         ;

procedure : VOID ID {change_scope($2); insert_function($1, $2);} procedure_signature {if(check_signature()==-1) return -1;}
          ;

procedure_signature : '(' args ')' '{' '}'
                    | '('')' '{' list '}'
                    | '(' args ')' '{' list '}'
                    ;

function : TIP ID  {change_scope($2); insert_function($1, $2);} function_signature {if(check_signature()==-1) return -1;}
          ;

function_signature : '(' args ')' '{' '}'
          | '(' ')' '{' list return ';' '}'
          | '(' ')' '{' return ';' '}'
          | '('args')' '{' return ';' '}'
          | '(' args ')' '{' list return ';' '}'

eval : EVAL '(' aritm_expr ')' 
     ;

aritm_expr: e '+' e   {$$=$1+$3; }
          | e '-' e {$$=$1-$3; }
          | e '*' e   {$$=$1*$3; }
          | e '/' e {$$=$1/$3; }
          | e OR e  {$$=$1 || $3;  }
          | NOT e {$$ = !$2; }
          | e AND e  {$$=$1 && $3;  }
          | e LE e { $$ = $1<=$3? 1 : 0; }
          | e GE e { $$ = $1>=$3? 1 : 0; }
          | e EQ e { $$ = $1==$3? 1 : 0;  }
          | e NEQ e { $$ = $1!=$3? 1 : 0; }
          | e LS e { $$ = $1<$3? 1 : 0; }
          ;

          e : e '+' e   {$$=$1+$3;  }
          | e '-' e {$$=$1-$3;  }
          | e '*' e   {$$=$1*$3; }
          | e '/' e {$$=$1/$3;  }
          |'(' e ')' {$$= $2;  }
          | e OR e  {$$=($1 || $3); }
          | NOT e {$$ = !$2;  }
          | e AND e  {$$=$1 && $3;  }
          | e LE e { $$ = $1<=$3? 1 : 0;}
          | e GE e { $$ = $1>=$3? 1 : 0;}
          | e EQ e { $$ = $1==$3? 1 : 0;}
          | e NEQ e { $$ = $1!=$3? 1 : 0;}
          | e LS e { $$ = $1<$3? 1 : 0;}
          | e GR e { $$ = $1>$3? 1 : 0;}
          | NR { $$=$1;  }
          | ID {    
                    int t=request_integer_type($1);
                    if (t==-1)
                         return -1;
                    $$=t;
               }
          |function_call {$$=0;}
          ;


while : WHILE '(' aritm_expr ')' '{' '}'
      | WHILE '(' aritm_expr ')' '{' list '}'
      ;

if_stmt : IF '(' aritm_expr ')' '{' list '}'
     | IF '(' ')' '{' '}'
     | IF '(' aritm_expr ')' '{' list '}' ELSE '{' list '}'
     | IF '(' aritm_expr ')' '{' '}' ELSE '{' list '}'
     | IF '(' aritm_expr ')' '{' list '}' ELSE '{' '}'
     | IF '(' aritm_expr ')' '{' '}' ELSE '{' '}'
     ;

for_stmt: FOR '(' comma_assign ';' aritm_expr ';' comma_assign ')' 
     | FOR '(' comma_assign ';' aritm_expr ';' ')'
     | FOR '(' ';' aritm_expr ';' aritm_expr ')'
     | FOR '(' ';' aritm_expr ';' comma_assign ')'
     | FOR '(' ';' aritm_expr ';' ')'
     | FOR '(' comma_assign ';' aritm_expr ';' aritm_expr ')' '{' list '}'
     | FOR '(' comma_assign ';' aritm_expr ';' comma_assign ')' '{' list '}'
     |FOR '(' comma_assign ';' aritm_expr ';' comma_assign ')' '{'  '}'
     | FOR '(' comma_assign ';' aritm_expr ';' ')' '{' list '}'
     | FOR '(' ';' aritm_expr ';' aritm_expr ')' '{' list '}'
     | FOR '(' ';' aritm_expr ';' comma_assign ')' '{' list '}'
     | FOR '(' ';' aritm_expr ';' ')' '{' list '}' 
     ;

comma_assign : assignment
           | assignment ',' comma_assign

args : TIP ID {insert_symbol($1, $2); add_arg($1);}
     | args ',' CLASS_ID ID  
     | CLASS_ID ID 
     | args ',' TIP ID  {insert_symbol($3, $4); add_arg($3);}
     ;

lista_apel : NR {if (check_compatible_type(INT)==-1) return -1;}
           | lista_apel ',' NR {if (check_compatible_type(INT)==-1) return -1;}
           | aritm_expr {if (check_compatible_type(INT)==-1) return -1;}
           | lista_apel ',' aritm_expr {if (check_compatible_type(INT)==-1) return -1;}
           | ID {if (check_compatible_type(get_variable_type($1))==-1) return -1;}
           | lista_apel ',' ID {if (check_compatible_type(get_variable_type($3))==-1) return -1;}
           | LETTER {if (check_compatible_type(CHAR)==-1) return -1;}
           | lista_apel ',' LETTER {if (check_compatible_type(CHAR)==-1) return -1;}
           | WORD    {if (check_compatible_type(STRING)==-1) return -1;}
           | lista_apel ',' WORD {if (check_compatible_type(STRING)==-1) return -1;}
           | FLT {if (check_compatible_type(FLOAT)==-1) return -1;}
           | lista_apel ',' FLT {if (check_compatible_type(FLOAT)==-1) return -1;}
           | function_call {if (check_compatible_type(get_function_type($1))==-1) return -1;}
           | lista_apel',' function_call  {if (check_compatible_type(get_function_type($3))==-1) return -1;}
           | {}
           ;
%%
void yyerror(const char * s){
     printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 