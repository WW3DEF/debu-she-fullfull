// �� ���� �հ�� ��� 
#include <stdio.h>

int main()
{
	int x,y,sum=0;
	float avg;
	
	scanf("%d %d", &x, &y);
	sum = x+y;
	avg = (float)sum/2;	// ���� �� ��ȯ 
	
	printf("sum=%d, avg=%.2f\n", sum, avg);
	
	printf("x=%d, y=%d\n", x++, ++y);	// ���,  x=x+1, //  y=y+1 ���
	x++;
	printf("x=%d, y=%d\n", x, y);	// ���,  x=x+1, //  y=y+1 ���

	int z=x++; // z=17, x=18
		printf("x=%d, y=%d\n, z=%d\n", x, y, z);	// ���,  x=x+1, //  y=y+1 ���
		
	if(y%2==0) {
		printf("%d�� ¦���Դϴ�.", y);
	}
	else {
		printf("%d�� Ȧ���Դϴ�.", y);
	}
	return 0;
}
