#include <stdio.h>
struct pos{
	int x;
	int y;
};

int main()
{
	struct pos p;
	scanf("%d %d", &p.x, &p.x);
	printf("%d %d", p.x, p.y);
	return 0;
}
