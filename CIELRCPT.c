// Menu Selection

#include <stdio.h>


int main()
{
	int testcase;
	scanf("%d",&testcase);
	int menu[] ={1,2,4,8,16,32,64,128,256,512,1024,2048};
	
	while(testcase--)
	{
		int p;
		scanf("%d",&p);
		int menuItems = 0;
		for(int i = 11;i>=0;i--)
		{	
			int div = p/menu[i];
			menuItems+=(div);
			p-=(div*menu[i]);
			if(p==0) break;
		}
		printf("%d\n",menuItems);
		
		
	}
}
