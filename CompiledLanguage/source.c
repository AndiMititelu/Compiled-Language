#include "./source.h"


char SCOPE[100];
struct symbol val[MAX_SYMBOLS];
struct function funcs[MAX_FUNCTIONS];
int symbol_count=0;
int funcs_count=0;
int get_type(const char* type)
{
    if (strcmp(type, "int")==0 || strcmp(type, "bool")==0) return INT;
    if (strcmp(type, "float")==0) return FLOAT;
    if (strcmp(type, "char")==0) return CHAR;
    if (strcmp(type, "string")==0) return STRING;
    if (strcmp(type, "void")==0) return VOYD;
    //if (strcmp(type, "Class")==0) return CLASS;

    return -1;
}

int get_function_by_index(const char* id)
{
    for (int i=0; i<funcs_count; i++)
    {
        if (strcmp(funcs[i].id, id)==0)
        {
            return i;
        }
    }
    return -1;
}

int insert_function(int type, const char* id)
{
    // int index=0;
    // if ((index=get_function_by_index(id)) != -1)
    // {
        
    //     printf("Function identifier already declared %s \n", id);
    //     return -1;

    // }
    strcpy(funcs[funcs_count].id, id);
    funcs[funcs_count].return_type=type;
    funcs_count++;
    return 0;
}
int check_signature()
{
    int index=get_function_by_index(SCOPE);
    for (int i=0; i<funcs_count; i++)
    {
        if (i != index && strcmp(funcs[index].id, funcs[i].id)==0)
        {
            if(funcs[i].args_number != funcs[index].args_number)
                continue;
            if(funcs[i].return_type != funcs[index].return_type)
                continue;
            for(int j=0; j<funcs[i].args_number; j++)
            {
                if (funcs[i].args_vector[j] != funcs[index].args_vector[j])
                    return 0;
            }
            printf("Function with the same signature already exists (%s)\n", funcs[index].id);
            return -1;
        }
    }
    return 0;
}
int add_arg(int type)
{
    //int func_index=get_function_by_index(SCOPE);
    int func_index=funcs_count-1;    
    funcs[func_index].args_vector[funcs[func_index].args_number++]=type;
    return 0;
}

int CALL_INDEX=0;
int BASE_INDEX=0;
int base_called_function_index=0;
int called_function_index=0;

int start_call(const char*id )
{
    BASE_INDEX=CALL_INDEX;
    CALL_INDEX=0;
    base_called_function_index=called_function_index;
    called_function_index=get_function_by_index(id);
    if (called_function_index==-1)
    {
        printf("Undeclared function identifier %s\n", id);
        return -1;
    }
    return 0;
}

int end_call()
{
    CALL_INDEX=BASE_INDEX;
    called_function_index=base_called_function_index;
    return 0;
}
int get_function_type(const char* id)
{
    int index=get_function_by_index(id);
    return funcs[index].return_type;
}


int get_variable_type(const char* id)
{
    int index=get_value_by_index(id);
    if(index==-1)
        return -1;
    return val[index].type;
}


int check_compatible_type(int type)
{
    if (CALL_INDEX==funcs[called_function_index].args_number)
    {
        printf("No function with such arguments \n");
        return -1;
    }
    if (type==funcs[called_function_index].args_vector[CALL_INDEX])
    {
        CALL_INDEX++;
        return 0;
    }
    return -1;
}

void change_scope(const char* newscope)
{
    strcpy(SCOPE, newscope);
}

int check_scope(const char* scp)
{
    if(strcmp(SCOPE, scp))
        return -1;
    else
        return 0;
}

int set_value_to_string(const char* id, const char* string)
{
    for (int i=0; i<symbol_count; i++)
    {
        if (strcmp(val[i].id, id)==0)
        {
            if(val[i].type!=get_type("string"))
            {
                printf("Left operand is not string %s \n", id);
                exit(1);
            }
            strcpy(val[i].val.str_val, string);
            return 0;
        }
    }
    printf("Left operand undeclared \n");
    exit(1);
}

int set_value_to_int(const char* id, int arg)
{
    for (int i=0; i<symbol_count; i++)
    {
        if (strcmp(val[i].id, id)==0)
        {
            if(val[i].type!=get_type("int"))
            {
                printf("Left operand is not integer %s \n", id);
                exit(1);
            }
            val[i].val.int_val=arg;
            return 0;
        }
    }
    printf("Left operand undeclared \n");
    exit(1);
}

int set_value_to_char(const char* id, const char c)
{
    for (int i=0; i<symbol_count; i++)
    {
        if (strcmp(val[i].id, id)==0)
        {
            if(val[i].type!=get_type("char"))
            {
                printf("Left operand is not char %s \n", id);
                exit(1);
            }
            val[i].val.char_val = c;
            return 0;
        }
    }
    printf("Left operand undeclared \n");
    exit(1);
}

int set_value_to_float(const char* id, float arg)
{
    for (int i=0; i<symbol_count; i++)
    {
        if (strcmp(val[i].id, id)==0)
        {
            if(val[i].type!=get_type("float"))
            {
                printf("Left operand is not float %s \n", id);
                exit(1);
            }
            val[i].val.float_val=arg;
            return 0;
        }
    }
    printf("Left operand undeclared \n");
    exit(1);
}

int name_is_taken(const char* name, const char* scope)
{
    for (int i=0; i<symbol_count; i++)
    {
        if (strcmp(name, val[i].id)==0 && strcmp(scope, val[i].scope)==0)
            return 1;
    }
    return 0;
}

int insert_symbol(int vartype, const char* id)
{

    if(name_is_taken(id, SCOPE))
        return -1;
    strcpy(val[symbol_count].id,id);
    val[symbol_count].type=vartype;
    strcpy(val[symbol_count].scope ,SCOPE);
    symbol_count++;
    return 0;
}

void print_symbol_table()
{
    printf("COUNT: %d\n", symbol_count);
    for (int i=0; i<symbol_count; i++)
    {
        printf("%s : %d, %s \n", val[i].id, val[i].type, val[i].scope);
    }
}

void print_function_table()
{
    printf("COUNT: %d\n", funcs_count);
    for (int i=0; i<funcs_count; i++)
    {
        printf("%s : %d, %d \n", funcs[i].id, funcs[i].return_type, funcs[i].args_number);
    //     printf("function name is %s \n", funcs[i].id);
    //     int k=funcs[i].args_number;
    //     for(int j=0; j<k; j++)
    //     {
    //         printf("%d, ", funcs[i].args_vector[j]);
    //     }
    }
}

void print_symbol_table_txt()
{
    FILE *file;
    file = fopen("symbol_table.txt", "w");
    for (int i=0; i<symbol_count; i++)
    {
        if(val[i].type == 0)
            fprintf(file, "ID: %s; TYPE: INT; SCOPE: %s; VALUE: %d\n", val[i].id, val[i].scope, val[i].val.int_val);
        else if(val[i].type == 1)
            fprintf(file, "ID: %s; TYPE: FLOAT; SCOPE: %s; VALUE: %f\n", val[i].id, val[i].scope, val[i].val.float_val);
        else if(val[i].type == 2)
            fprintf(file, "ID: %s; TYPE: CHAR; SCOPE: %s; VALUE: %c\n", val[i].id, val[i].scope, val[i].val.char_val);
        else if(val[i].type == 3)
            fprintf(file, "ID: %s; TYPE: STRING; SCOPE: %s; VALUE: %s\n", val[i].id, val[i].scope, val[i].val.str_val);

    }
    fclose(file);
}


void print_function_table_txt()
{
    FILE *file;
    file = fopen("function_table.txt", "w");
    for (int i=0; i<funcs_count; i++)
    {
        if(funcs[i].return_type == 0)
            fprintf(file, "ID: %s; ARG_NUMBER: %d  RETURN_VALUE: %s\n", funcs[i].id,  funcs[i].args_number,"Integer");
        else if(funcs[i].return_type == 1)
            fprintf(file, "ID: %s; ARG_NUMBER: %d RETURN_VALUE: %s\n", funcs[i].id, funcs[i].args_number,"float");
        else if(funcs[i].return_type == 2)
            fprintf(file, "ID: %s; ARG_NUMBER: %d  RETURN_VALUE: %s\n", funcs[i].id, funcs[i].args_number,"char");
        else if(funcs[i].return_type == 3)
            fprintf(file, "ID: %s;  ARG_NUMBER: %d RETURN_VALUE: %s\n", funcs[i].id,funcs[i].args_number, "string");

        fprintf(file, "Function Arguments: \n");
        for(int j=0; j<funcs[i].args_number; j++)
        {
            char argument_type[30];
            if(funcs[i].args_vector[j] == 0)
                strcpy(argument_type, "int");
            else if(funcs[i].args_vector[j] == 1)
                strcpy(argument_type, "float");
            else if(funcs[i].args_vector[j] == 2)
                strcpy(argument_type, "char");
            else if(funcs[i].args_vector[j] == 3)
                strcpy(argument_type, "string");


            fprintf(file, "%s; ", argument_type);
        }
        fprintf(file, "\n");

    }


    fclose(file);

}
void print(const char* id)
{
    for (int i=0; i<symbol_count; i++)
    {
        if (strcmp(val[i].id, id)==0)
        {
            int type=val[i].type;
            switch(type)
            {
                case 0: printf("%d \n", val[i].val.int_val); return;
                case 1: printf("%f \n", val[i].val.float_val); return;
                case 2: printf("%c \n", val[i].val.char_val); return;
                case 3: printf("%s \n", val[i].val.str_val); return;
            }
        }

    }
    printf("Unknown identifier \n");
    exit(1);
}

int get_value_by_index(const char* id)
{
    for (int i=0; i<symbol_count; i++)
    {
        if (strcmp(val[i].id, id)==0)
        {
            return i;
        }
    }
    printf("Unknown identifier %s\n", id);
    return -1;
}


void PrintIdentifier(const char* id)
{
  printf("%s \n", id);
}

int set_value_id(const char* id1, const char* id2)
{
    int idx1=get_value_by_index(id1);
    if(idx1 == -1)
    {
        return -1;
    }

    int idx2=get_value_by_index(id2);
    if(idx2 == -1)
    {
        return -1;
    }

    if(val[idx1].type != val[idx2].type)
    {
        printf("Operand types don't match. %s and %s \n", id1, id2);
        return -1;
    }

    if (val[idx1].type==STRING)
    {
        strcpy(val[idx1].val.str_val, val[idx2].val.str_val);
    }
    else if(val[idx1].type==INT)
    {
        val[idx1].val.int_val=val[idx2].val.int_val;
    }
    else if(val[idx1].type==FLOAT)
    {
        val[idx1].val.float_val=val[idx2].val.float_val;
    }
    else if(val[idx1].type==CHAR)
    {
        val[idx1].val.char_val=val[idx2].val.char_val;
    }


    return 0;
}

int request_integer_type(const char* id)
{
    int idx=get_value_by_index(id);
    if(idx==-1)
    {
        return -1;
    }
    if(val[idx].type != INT)
    {
        printf("non integer right variable %s not allowed when assigning to an integer  \n", id);
        return -1;
    }
    return val[idx].val.int_val;
}
