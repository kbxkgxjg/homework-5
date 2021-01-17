#include <stdio.h>
#define  MAXSIZE    11	
#define  ERROR      0
#define  OK         1

typedef struct
	{
		int data[MAXSIZE] ; 
		int top;
	}SqStack;
	
Push(SqStack *S, int e)
{
	if(S->top == MAXSIZE - 1)
	{
		return ERROR;
	}
	S->top++;
	S->data[S->top]=e;
	
	return OK;
}

Pop (SqStack *S, int *e)
{
	if(S->top==0)
		return ERROR;
	*e=S->data[S->top];
	S->top--;
	return OK;
}

int main()
{
	SqStack sum;
	int i;
	int e;
	for(i = 0;i <= 9;i++)
	{
		Push(&sum ,i);
		printf("成功储存了元素%d\n",i);
	}
	for(i = 0;i <= 9;i++)
	{
		Pop(&sum , &e);
		printf("第%d次%d\n",i,e);
	}
	
	return 0;
}
