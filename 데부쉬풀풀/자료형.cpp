#include <stdio.h>
#include <string.h>
//���� - int(4byte), long, long long(8byte), unsigned, unsigned long long
//�Ǽ� - float(4byte), double(8byte)
//���� - char(1byte) , �ѱ� - 2byte, char str[10];
int main()
{
	int x=10;
	double dx=31.4,pi=3.1415e+5;
	char c='A';
	char str[]="hello";
	char str2[]={'h','e','l','l','o'};
	int n=strlen(str);
	int n2=strlen(str2);
	
	printf("x=%d, dx=%f, pi=%lf\n",x,dx,pi);
	printf("c=%c, str=%s, str2=%s\n",c,str,str2);
	printf("str����=%d, str2�� ����=%d\n",n,n2);
	printf("c=%c, c=%d\n",c,c);
	int i;
	for(i=0;i<n;i++){
		printf("%c ", str[i]-32);
	}
 } 
