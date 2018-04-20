#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*运算20以内任意数字四则运算，每次正确得10分*/
const int N = 10;
int ff(int x,int y,char op);

int main(void){
	int i,a,b,c = 0,d;
	char op;
	srand(time(0));
	for(i=0;i < N;i++){
		a = rand() % 20 + 1;
		b = rand() % 20 + 1;
		d = rand() %4;
		if(d == 0)op = '+';
		else if (d == 1)op = '-';
		else if (d == 2)op = '*';
		else op = '/';
		if (ff (a,b,op))c++;
	}
	printf("得分：%d\n",c * 10);
}

int ff(int x,int y,char op){
	int z;
	printf("%d %c %d =", x, op, y);
	scanf("%d", &z);
	switch(op){
		case '+' : return x + y == z;
		case '-' : return x - y == z;
		case '*' : return x * y == z;
		case '/' : return x / y == z;
		default : {printf("运算符错！ \n"); exit(1);}
	}
}