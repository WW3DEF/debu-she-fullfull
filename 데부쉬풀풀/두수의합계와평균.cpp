// 두 수의 합계와 평균 
#include <stdio.h>

int main()
{
	int x,y,sum=0;
	float avg;
	
	scanf("%d %d", &x, &y);
	sum = x+y;
	avg = (float)sum/2;	// 강제 형 변환 
	
	printf("sum=%d, avg=%.2f\n", sum, avg);
	
	printf("x=%d, y=%d\n", x++, ++y);	// 출력,  x=x+1, //  y=y+1 출력
	x++;
	printf("x=%d, y=%d\n", x, y);	// 출력,  x=x+1, //  y=y+1 출력

	int z=x++; // z=17, x=18
		printf("x=%d, y=%d\n, z=%d\n", x, y, z);	// 출력,  x=x+1, //  y=y+1 출력
		
	if(y%2==0) {
		printf("%d는 짝수입니다.", y);
	}
	else {
		printf("%d는 홀수입니다.", y);
	}
	return 0;
}
