#include "stack.h"
#include<assert.h>
#include<stdio.h>


int main()
{
	Stack s = stack_new(20);
	Stack *stk = &s;

	Stack s1 = stack_new(10);
	Stack *stk1 = &s1;

	if(stk1->top==-1)
	{
		//return 0;
	}
	Stack_Result *res  = (Stack_Result*) malloc(sizeof(Stack_Result));
	Stack_Result *res1  = (Stack_Result*) malloc(sizeof(Stack_Result));


	Employee emp0 ={1,"Naren","SE","CODING","E-SANTE"};
	Employee emp1 ={2,"chandan","SE","testing","A-SANTE"};
	Employee emp2 ={3,"anupam","SE","CODING","T-SANTE"};
	Employee emp3 ={4,"pinaka","SE","CODING","T-SANTE"};
	Employee emp4 ={5,"shubham","SE","CODING","T-SANTE"};


	stack_push(stk,emp0,res);
	stack_push(stk,emp1,res);
	stack_push(stk,emp2,res);
	stack_push(stk,emp3,res);
	stack_push(stk,emp4,res);

	
	stack_peek(stk,res);
	printf("%s\n",res->data.name);
	printf("%d\n",stk->top);
	for(int i = 0;i<3;i++){
		stack_pop(stk,res);
		stack_push(stk1,res->data,res1);
	}

	stack_peek(stk,res);
	printf("\n%s\n",res->data.name);

	stack_pop(stk,res);
	while((*stk1).top!=-1){
		stack_pop(stk1,res);
		stack_push(stk,res->data,res1);
	}
	stack_peek(stk,res);
	printf("\n%s\n",res->data.name);
	printf("%d\n",stk->top);



	//s=stack_pop(s,&Sres);
	//q=queue_add(q,Sres.data,&Qres);
	//dcount--;
	//printf("%s\n",res->data.dept);

	//stack_peek(stk,res);
	//printf("%s\n",res->data.name);






}