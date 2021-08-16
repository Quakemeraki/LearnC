#include <stdio.h>
int main ()
{
	int a;
	float b,c;
	a=2147483647;
	b=3.4E38;
	c=-3.4E38;
	printf("%d£¬%d,%d\n",a,a+1,a+2);
	printf("%e\n",b*100);
	printf("%e\n",c*100);

	return 0;
}