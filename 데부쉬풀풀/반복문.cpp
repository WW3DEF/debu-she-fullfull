#include <stdio.h>

int main()
{
	int n,i;
	int e_sum=0, o_sum=0;
	
	scanf("%d", &n);
	for(i=1;i<=n;i++) {		//����, ��, ������ 
		if(i%2==1){
			printf("%d \n",i);
			o_sum += i;	// Ȧ���� �� 
		}
		else {
			e_sum += i; // ¦���� �� 
		}
	}
	printf("¦���� �հ�=%d, Ȧ���� �հ�=%d\n",e_sum,o_sum);
	printf("3�� ����� ����ϸ� == \n");
	for(i=1;i<=n;i++) {
		if(i%3==0) {
			printf("%d ", i);
		}
	}
	printf("\n6�� ����� ����ϸ� == \n");
	int j=1;
	
	while(j<=n)
	{
		if(j%6==0){
			printf("%d ", j);
		}
		j++;
	}
}
