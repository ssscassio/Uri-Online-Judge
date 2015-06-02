#include <iostream>
#include <stdio.h>
	 
using namespace std;
 
int main() {
 
	float S,i,j;
	i = j = 1;
	S = 0;
	for(; i<=39; i+=2, j*=2)
		S+= (float) i/j;
	

	printf("%.2f\n", S);
	 
    return 0;
}
