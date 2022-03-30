#include <stdio.h>
struct pos{
	int x;
	int y;
};

int main()
{
	struct pos p;
	struct pos *pp;
	
	pp=&p;
	scanf("%d %d", &p.x, &p.x);
	printf("%d %d\n", p.x, p.y);
	printf("%d %d\n", pp->x, pp->y);
	return 0;
}
