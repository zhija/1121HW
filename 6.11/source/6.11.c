#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	
	int i, j, tmp;
	int a[10] = { 75,84,12,63,14,5,45,87,96,52 };
	printf("Àu¤Æªºªwªj±Æ§Ç\n\n");
	for (i = 1; i <10; i++)
	{
		int b = 0;
		for (j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			
			}
			else
			{
				b = b + 1;
			}
		}
		if (b == 9)
			break;
		
		printf("Loop %d:", i);
		for (j = 0; j < 10; j++)
		{
			printf("%4d", a[j]);
		}
		printf("\n");
	}
	system("pause");
}