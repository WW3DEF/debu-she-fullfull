#include <stdio.h>

int main()
{
	int a=15, b;
	if(a>10){
		b=a-10;
	}
	else {
		b=a-5;
	}
	printf("%d %d\n", a,b);
	
	int result = (a>10)? a-10: b-5;		// 삼항연산자 (조건)? 참: 거짓; 
	printf("%d %d\n", a, result);
	
	while(b--)			// 참일때 반복,false=0, true=1,2,3,4,5.......;
	{
		printf("%d ", b);
	 } 
}
