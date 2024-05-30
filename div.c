#include<stdio.h>
int division(int no1,int no2)
{
	int ans=0;
	ans=no1/no2;
	return ans;
}
int main()
{
	int a=11;
	int b=21;
	int c=a/b;
	printf("inside main function..\n");
	c=division(a,b);
	printf("%f\n",c);
	return 0;
}