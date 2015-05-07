#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

float x,y;
scanf("%f %f",&x, &y);

if(x>0){
	if(y<0)
		printf("Q4\n");
	else if(y>0)
		printf("Q1\n");
	else
		printf("Eixo X\n");
}
else if(x < 0){
	if(y<0)
		printf("Q3\n");
	else if(y>0)
		printf("Q2\n");
	else
		printf("Eixo X\n");
}
else{
	if(y==0)
		printf("Origem\n");
	else
		printf("Eixo Y\n");
}

return 0;
}
