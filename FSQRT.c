// Finding Square Root

#include <stdio.h>
#include <math.h>

int main()
{
	int testcase;
	scanf("%d",&testcase);

	while(testcase--)
	{	
		int n;
		scanf("%d",&n);
		printf("%d\n",(int)sqrt(n));
	}
}
