#include <stdio.h>

int main(void){
	int x = 0;
	int y = 0;
	do {
		x += 2;
		y += x*x;

	}
	while(x < 1000);
	printf("n = %d\n",x-2);
}