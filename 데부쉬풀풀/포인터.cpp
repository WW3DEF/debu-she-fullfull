#include <stdio.h>

int main()
{
	int arr[]={10,20,30,40,50};
	char str[]="hello";		//�κй��� ��������, ��ü���� ���� �Ұ��� 
	char *str2="world";		//�κй��� �����Ұ���, ��ü���� ���� ����
	
	printf("%d %d\n", arr[0], *arr);
	printf("%d %d\n", arr[1], *(arr+1));
	
	int n = sizeof(arr)/sizeof(int);
	int i;
	for(i=0;i<n;i++){
		printf("%d %d\n",arr[i], *(arr+i));
	}
	printf("%s %s\n", str, str2);
	str[4] = 'a';
	str2 = "world!!";
	printf("%s %s\n", str, str2); 
}
