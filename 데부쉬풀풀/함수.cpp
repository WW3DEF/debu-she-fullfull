#include <stdio.h>

void print_line()
{
	printf("-----------------------------\n");
}
int add(int x, int y)
{
	return x+y;
}
void swap(int *x, int *y)		//교환 
{
	printf("%d %d\n",x,y);		//주소 
	printf("%d %d\n",*x,*y);	//값 
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
	
}
int main() 
{
	int x=3, y=4;
	print_line();
	int sum = add(x,y);
	printf("%d\n", sum);
	printf("%d\n", add(7,8));
	printf("x=%d y=%d\n",x,y);
	swap(&x,&y); 
	printf("x=%d y=%d\n"x,y);
}
