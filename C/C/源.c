
#include <stdio.h>
int main()
{
	int t;
	scanf_s("%d", &t);
	if (t >= 10000 && t <= 99999)
		printf("t是五位数");
	else
		if (t >= 1000 && t <= 9999)
		printf("t是四位数");
	else
			if (t >= 100 && t <= 999)
		printf("t是三位数");
	else
				if (t >= 10 && t <= 99)
		printf("t是二位数");
	else	
					printf("t是一位数");

	return 0;
}