#include <stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=9;i++){
		printf("--------------%d´Ü---------------\n",i);
		for(j=1;j<=9;j++){
			
			printf("%d * %d = %d\n",i, j, i*j);
		}
	}
	
	for(i=2; i<=9; i++){
		for(j=1; j<=9; j++){
			printf("%d*%d=%2d", i, j, i*j);
		}
		printf("\n");
	}
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	for(i=1; i<=5; i++){
		for(j=5; j>=i; j--){
			printf("* ");
		}
		printf("\n");
	}
	char ch='A';
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%c ", ch++);
		}
		printf("\n");
	}
}
