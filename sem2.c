#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the nos.: ");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)&(a>c)
	{
		printf("%f larger than %f and %f",a,b,c);
	}
	else{
		if(b>a)&(b>c){
		printf("b larger than a and c");
	}
		else{
		printf("c greater than b and c");
	}
	return 0;
}
