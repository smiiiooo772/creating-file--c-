//create a file...
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	FILE *fp;
	char ch[50]=("welcome to bsc-2022");
	fp=fopen("bsc.txt","w");
	if(fp == NULL)
	{
		printf("file can't be open");
	}
	for(i=0;i<strlen(ch);i++)
	{
		fputc(ch[i],fp);
	}
	fclose(fp);
}
