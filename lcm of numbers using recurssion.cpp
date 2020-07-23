#include<stdio.h>
int isLCM(int,int);
int main()
{
	int num1, num2, lcm;
	printf("input first number: ");
	scanf("%d",&num1);
	printf("input second number: ");
	scanf("%d",&num2);
	lcm = isLCM(num1, num2);
	printf("LCM of %d and %d = %d",num1 ,num2 ,lcm);
	return 0;
}
int isLCM(int num1, int num2){
	static int i =1;
	if(i%num1==0 && i%num2==0)
	{
		return i;
	}
	else
	{
		i++;
		isLCM(num1,num2);
		return i;
	}
}
