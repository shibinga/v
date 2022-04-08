#include"stdio.h"
int main()
{
	char strexp[] = "3+4";
	int a = strexp[0]-'0';
	int b = strexp[2]-'0';
	printf("%d", a + b);
	return 0;
}