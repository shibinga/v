#include"stdio.h"
#include"string.h"

int main()
{
	char strexp[] = "1+2+2+1+2+5+4-1-3+4-8";
	int s = strexp[0] - '0';
	for (int i = 0; i < strlen(strexp); i++)
	{
		if (strexp[i] == '+')
		{
			s = s + (strexp[i + 1] - '0');
			i++;
		}
		if (strexp[i] == '-')
		{
			s = s - (strexp[i + 1] - '0');
			i++;
		}
	}
	printf("%d",s);
	return 0;
}