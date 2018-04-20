#include <stdio.h>


int main(){
int x=1;
int y;
int z=1;

for (y=1;y<=10;y++){
	x*=3;
	z+=x;
	
}
printf("%d\n",z);
}