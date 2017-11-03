#include<stdio.h>
int JudgeCharacterType(int ah);
int main()
{
	int c;
	printf("please input a characrer:");
	c=getchar();
	JudgeCharacterType(c);
	printf("The ASCII of'%c'is%d.\n\n",c,c);
	return 0;
 } 
 int JudgeCharacterType(int ah)
 {
 	switch(ah)
 	{
 		case'A':case'B':case'C':case'D':case'E':case'F':case'G':case'H':case'I':case'J':case'K':
		case'L':case'M':case'N':case'O':case'P':case'Q':case'R':case'S':case'T':case'U':case'V':
		case'W':case'X':case'Y':case'Z':
		printf("%c:Uppercase letters.",ah);
		break; 		
	 }
 }
