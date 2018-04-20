#include <stdio.h>
/*
 计算| 1+a∑i=2 (-1)^i /i^2 |的值 ， 
*/
double f1(int n){
	int i;
	double sign = 1.0,s = 1.0;
	for(i = 2;i <= n;i++){
		s += sign/(i * i);
		sign *= -1;
	}
	return s;
}

int main(void){
	int a;    //输入a的值
	printf("输入一个大于等于2的整数：");
	do scanf("%d",&a);while(a <=1);
	printf("%lf\n",f1(a));
}