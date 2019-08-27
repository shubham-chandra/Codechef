// Chef and Remissness

#include <stdio.h>

int main()
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		if(a > b)
			printf("%d %d\n",a,a+b);
		else
			printf("%d %d\n",b,a+b);
	}
	return 0;
}
