// Second largest number

#include <stdio.h>

int main()
{
	int testcase;
	scanf("%d",&testcase);

	while(testcase--)
	{	
		
		int A[3];
		for(int i = 0;i<3;i++)
		{	
			
			scanf("%d",&A[i]);
			

		}
		if(A[0]>A[1])
		{
			if(A[2] > A[0])
				printf("%d\n",A[0]);
			else if(A[2] > A[1])
				printf("%d\n",A[2]);
			else
				printf("%d\n",A[1]);
		}
		else
		{
			if(A[2] > A[1])
                                printf("%d\n",A[1]);
                        else if(A[2] > A[0])
                                printf("%d\n",A[2]);
                        else
                                printf("%d\n",A[0]);
		}
		
	}
}
