
#include <stdio.h>
int main()
{
	int t;
	scanf_s("%d", &t);
	if (t >= 10000 && t <= 99999)
		printf("t����λ��");
	else
		if (t >= 1000 && t <= 9999)
		printf("t����λ��");
	else
			if (t >= 100 && t <= 999)
		printf("t����λ��");
	else
				if (t >= 10 && t <= 99)
		printf("t�Ƕ�λ��");
	else	
					printf("t��һλ��");

	return 0;
}