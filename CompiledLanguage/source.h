#ifndef SOURCE_H
#define SOURCE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INT 0
#define FLOAT 1
#define CHAR 2
#define STRING 3
#define VOYD 4

// #define CLASS 4

#define MAX_SYMBOLS 500
#define MAX_FUNCTIONS 500

union value
{
  int int_val;
  float float_val;
  char char_val;
  char str_val[256];
  // bool bool_val;
};

struct symbol
{
  char id[100];
  int type;
  char scope[100];
  union value val;
};

struct function
{
  char id[100];
  int return_type;
  int args_number;
  int args_vector[100];
};

int get_type(const char *type);
int check_scope(const char *scp);
void change_scope(const char *newscope);

int set_value_to_string(const char *id, const char *string);

int set_value_to_int(const char *id, int arg);

int set_value_to_char(const char *id, const char c);

int set_value_to_float(const char *id, float arg);

int name_is_taken(const char *name, const char *scope);
int check_signature();

int insert_symbol(int vartype, const char *id);
void print_function_table_txt();
void print_symbol_table();
int start_call(const char *id);
int get_variable_type(const char* id);
int check_compatible_type(int type);
int get_function_type(const char* id);
int end_call();
void print_symbol_table_txt();
void print(const char *id);
int insert_function(int type, const char *id);
int get_value_by_index(const char *id);
void print_function_table();
int set_value_id(const char *id1, const char *id2);
int add_arg(int type);
void PrintIdentifier(const char *id);
int request_integer_type(const char *id);
int check_compatible_type(int type);
#endif
