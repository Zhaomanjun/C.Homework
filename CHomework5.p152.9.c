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
			printf("����\t");
			obverse++;
		}
		else
		{
			printf("����\t");
			reverse++;
		}
		if(n%8==0)
		   printf("\n");
	}
	printf("Ͷ��100�Σ��������%4d�Σ��������%4d��\n",obverse,reverse);
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
