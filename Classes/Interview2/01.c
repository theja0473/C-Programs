












	#include<stdio.h>

	int main()
	{
		int i = 1;

		while(i <= 10)
		{
			printf("%d ", i);
		
			if(i >= 6)
			{
				continue;
			}

			i++;			
		}

		printf("\n");
	}