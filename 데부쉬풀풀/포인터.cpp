#include <stdio.h>

int main()
{
	int arr[]={10,20,30,40,50};
	char str[]="hello";		//부분문자 수정가능, 전체문자 수정 불가능 
	char *str2="world";		//부분문자 수정불가능, 전체문자 수정 가능
	
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
