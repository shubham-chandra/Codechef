// Factorial finding
#include <stdio.h>

unsigned long int N[30] ={0};

unsigned long int factorial(int n)
{
	if (N[n] !=0)
		return N[n];
	else
	{
		N[n] = n*factorial(n-1);
		return N[n];
		
	}
		
}
int main()
{
	int testcase;
	scanf("%d",&testcase);
	
	N[1]=1;
	N[0]=1;	
	while(testcase--)
	{
		int num;
		scanf("%d",&num);
		printf("%lu\n",factorial(num));	
	}
}
