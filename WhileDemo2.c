#include <stdio.h>
/*求两个数的最大公约数和最小公倍数*/
int f1(int a, int b)
{
	int r;
	while(b != 0){
		r = a % b;
		a = b;b = r;
	}
	return a;
}

int f2(int a, int b){
	int i = 2,p = 1;
	do{
		while(a % i == 0 && b % i == 0){
			p *= i,a /= i;b /=i; 
		}
		i++;
	}while(a >= i && b >= i);
	return p * a * b;
}

int main(void){
	int a,b;
	printf("输入两个正整数：");
	do scanf("%d %d ", &a,&b);while(a <= 0 || b <= 0);
	printf("%d 和 %d的最大公约数： %d\n",a,b,f1(a,b) );
	printf("%d 和 %d的最小公倍数： %d\n",a,b,f2(a,b) );
}