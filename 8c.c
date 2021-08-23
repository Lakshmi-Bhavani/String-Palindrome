#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	int i,flag=0,len;
	printf("Enter a string");
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
	if(s[i]!=s[len-i-1])
	{
		flag++;
		break;
	}
}
if(flag==0)
printf("Palindrome");
else 
printf("Not a Palindrome");

	
}
