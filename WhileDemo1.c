#include <stdio.h>
/*将输入正整数中的数字顺序对调*/
int main(void){
	int x;
	printf("输入一个正整数：");
	do scanf("%d",&x);while(x<=0);
	while(x){
	int k = x % 10;
	printf("%c",k + 48);
	x = x / 10;
	}
	printf("\n");
}