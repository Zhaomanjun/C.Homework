#include<stdio.h>
#include<stdlib.h>

void convert(int n)
{
	int i,s;
	if((i=n/7)!=0) 
	convert(i);
	putchar(n%7+'0');
 }
 int main()
 {
 	int number;
 	do{
 		printf("\n������һ��ʮ������������");
		 scanf("%d",&number); 
	 }while(number<=0);
	 printf("\n �߽��ƣ�\n");
	 convert(number);
	 printf("\n");
	 system("PAUSE");
	 return 0;
  } 
