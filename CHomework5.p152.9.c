#include<stdio.h>
#include<stdlib.h>

int flip();
int main()
{
	int obverse, reverse,n;
	obverse = 0;
	reverse = 0;

	for(n=1;n<=100;n++)
	{
		if(flip()==1)
		{
			printf("正面\t");
			obverse++;
		}
		else
		{
			printf("反面\t");
			reverse++;
		}
		if(n%8==0)
		   printf("\n");
	}
	printf("投掷100次，正面出现%4d次，反面出现%4d次\n",obverse,reverse);
	system("PAUSE");
	return 0;
 } 
 
 int flip()
 {
 	int a;
 	a = rand();
 	if(a%2==0)
 	 return 0;
 	else
 	 return 1;
 }
