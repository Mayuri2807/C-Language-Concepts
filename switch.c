 #include<stdio.h> 
int main()

{
	int standard=0;
	printf("Enter the standard ...\n");
	scanf("%d",&standard);
	switch(standard)
	{
	  case 1:
	  printf("your exam at 7 am..\n");
	  break;
	  case 2:
	  printf("your exam at 8 am...\n");
	  break;
	  case 3:
	  printf("your exam at 9 am..\n");
	  break;
	  default:
	  printf("wrong choice...\n");
    }
	return 0;

}
