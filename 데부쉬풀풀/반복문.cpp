#include <stdio.h>

int main()
{
	int n,i;
	int e_sum=0, o_sum=0;
	
	scanf("%d", &n);
	for(i=1;i<=n;i++) {		//시작, 식, 증감식 
		if(i%2==1){
			printf("%d \n",i);
			o_sum += i;	// 홀수의 합 
		}
		else {
			e_sum += i; // 짝수의 합 
		}
	}
	printf("짝수의 합계=%d, 홀수의 합계=%d\n",e_sum,o_sum);
	printf("3의 배수를 출력하면 == \n");
	for(i=1;i<=n;i++) {
		if(i%3==0) {
			printf("%d ", i);
		}
	}
	printf("\n6의 배수를 출력하면 == \n");
	int j=1;
	
	while(j<=n)
	{
		if(j%6==0){
			printf("%d ", j);
		}
		j++;
	}
}
