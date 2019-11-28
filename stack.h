#ifndef INCLUDED_STACK_
#define INCLUDED_STACK_
#include<stdint.h>
#define MAX_DEPTH 32
#include<stddef.h>
#include<stdlib.h>

#define STACK_OK 1
#define STACK_FULL 2
#define STACK_EMPTY 3

typedef struct _stack_ Stack;
typedef struct _stackResult_ Stack_Result;
typedef struct _emp_ Employee;

struct _emp_{
	int id;
	char name[20];
	char desig[10];
	char dept[20];
	char comp[10];
};

struct _stack_
{
	Employee data[MAX_DEPTH];
	//int32_t data[MAX_DEPTH];
	int32_t top;
	int32_t size;

};

struct _stackResult_
{
	Employee data;

	//int32_t data;
	int32_t status;
};

Stack stack_new(int32_t size);
Stack* stack_push(Stack *stk,Employee data,Stack_Result * res);
Stack* stack_pop(Stack *stk,Stack_Result *res);
Stack* stack_peek(Stack *stk,Stack_Result *res);

#endif
