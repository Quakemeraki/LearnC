#include <stdio.h>
int main()
{
	double a;
	printf("old: ");
	scanf("%lf",&a);
	printf("second: %e",a*3.156e7);
	return 0;
}