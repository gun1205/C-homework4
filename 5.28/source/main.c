#include<stdio.h>
#include<stdlib.h>

char change(char j);

int main(void)
{
	char leter;
	printf("put in a large or small leter: ");
	scanf_s("%c", &leter);
	printf("exchange %c", change(leter));
	
	system("pause");
	return 0;
}

char change(char j)                     //char ���s�X��AC11
{
	if (j >= 'a' && j <= 'z')           
	{
		j = j - 32;
	}

	else if (j >= 'A' && j <= 'Z')      //A��65 (10) +32 ��a
	{
		j = j + 32;
	}

	return j;
}
