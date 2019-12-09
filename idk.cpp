#include<stdio.h>
int main()
{
	int x=10,y=15,z=5,p;
	p=++x*(y--+z--);
	printf("%d %d %d %d",x,y,z,p);
	return 0;
}
