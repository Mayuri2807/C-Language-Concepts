#include<stdio.h>
int addition(int no1,int no2)
{
	int ans=0;
	ans=no1+no2;
	return ans;
}
int main()
{
    int a=11;
    int b=21;
    int c=a+b;
    printf("inside main function \n");
    c=addition(a,b);
    printf("%d\n",c);
	return 0;
}