#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>
int main ()
{
	FILE *input1, *input2, *input3;
	char c;
	int count_line=0;
	input1 = fopen("data1", "r");
	if(!input1)
	{
		printf("gg\n");
	}
	/*while((c = getc(input1))!= EOF)
	{
		printf("%c", c);
		if(c == '\n')
		{
			count_line++;
		}

	}*/
	char data[206122][40];
	int i, len;
	char *tmp, tmp2[40];
	for(i=0; i<206122; i++)
	{
		fscanf(input1, "%s", data[i]);
	}
	/*for(i=0; i<206122; i++)
	{
		printf("%s", data[i]);
	}*/
	char inp[20];
	scanf("%s", inp);
	char head[1];
	strncpy(head, inp, 1);
	printf("%s", head);
	
}
