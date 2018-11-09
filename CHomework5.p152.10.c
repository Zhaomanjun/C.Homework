#include<stdio.h> 
#include<stdlib.h>
long int time(int h,int m,int s);
int main()
{
	int h1,m1, s1,h2,m2,s2;
	long int t;
	do{
		printf("Input the time1: (小时：分钟：秒)");
		scanf("%d:%d:%d",&h1,&m1,&s1);
	}while(h1<0||h1>11||m1<0||m1>59||s1<0||s1>59);
	
	do{
		printf("Input the time2: (小时：分钟：秒)");
		scanf("%d:%d:%d",&h2,&m2,&s2);
	}while(h2<0||h2>11||m2<0||m2>59||s2<0||s2>59);
	t=time(h1,m1,s1)>time(h2,m2,s2)?time(h1,m1,s1)-time(h2,m2,s2):time(h2,m2,s2)-time(h1,m1,s1);
	printf("time:%lds\n",t);
	system("PAUSE");
	return 0;
	
}
long int time(int h,int m,int s)
{
	long int time=0;
	time=(h*60+m)*60+s;
	return time;
}
