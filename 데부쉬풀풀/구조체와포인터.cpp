#include <stdio.h>

int main()
{
	struct insa {
		char name[10];
		int age;
	};
	
	struct insa in[]={"Kim", 28, "Lee", 38, "Park", 42, "Choi", 31};
	struct insa *p;
	int i;
	p=in;	// p 변수에 in의 주소를 참조 
	printf("%s %d ",in[0].name, in[0].age);
	printf("%s %d ",p->name, p->age);
	p++;
	printf("%s %d ",p->name, p->age);
	
	for(i=0;i<4;i++){
		printf("%s %d\n", in[i].name, in[i].name);
	}
	for(i=0;i<4;p++){
		printf("%s %d\n", p->name, p->age);		//(*p).name, (*p).age;
		i++;
	}
}
