#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void push(int i);
int pop(void);
int stack[MAX];
int tos=0;

int fib(int n)
{
	static int d=0;
	int i;
	if(d==0) push(0);
	d++;
	for(i=1;i<d*6;i++)
		printf("");
	printf("µÚ%d²ãÐÎ²Înum=%ld\n",d,n);
		 
	if (n == 0 || n == 1)
	{
		d=pop();
		return 1;
	}
	else
		push(d);
		return (fib(n - 1) + fib(n - 2));
}
int main()
{
	
	int n;
	printf("Input:");
	scanf("%d", &n);
	printf("Result:%d\n", fib(n));
	system("PAUSE"); 
	return 0;
}

viod push(int i)
{
	if(tos>=MAX){
		printf("Stack Full\n");
	}
	stack[tos]=i;
	tos++;
}
int pop(void)
{
	tos--;
	if(tos<0){
		printf("Stack Underflow\n");
		return 0;
	}
	return stack[tos];
}
