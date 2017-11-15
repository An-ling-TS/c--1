#include<stdio.h>
int main()
{
	int hex1,hex2;
	scanf("%x%x",&hex1,&hex2);
	if(hex1>hex2){printf("1");
	}
	else if(hex1==hex2){printf("0");
	}
	else{printf("-1");
	}
	return 0;
}
