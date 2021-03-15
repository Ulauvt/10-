#include <stdio.h>
int main()
{
	int i = 1;
int a, n;
int sum=0;

	 for (i = 1; i <=10; i++)
	{
		 a = 1;
		 for (n = 1; n < i+1; n++)
			 a = a * n;
		 sum = sum + a;
	}
		 printf("1到10的阶乘和是%d\n", sum);
return 0;
}