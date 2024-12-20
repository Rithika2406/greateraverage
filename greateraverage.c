#include <stdio.h>

int main() {
	int A,B,C;
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d",&A,&B,&C);
	    int d=(A+B)/2;
	    if(d>C)
	    {
	        printf("yes\n");
	    }
	    else
	    {
	        printf("no\n");
	    }
	}

}

