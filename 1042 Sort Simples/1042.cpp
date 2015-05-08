#include <cstdio>
#include <vector>    //std::vector
#include <iostream>  //std::cout
#include <algorithm> //std::sort
int main(){
	int a, b, c;
	int vec[3];

	scanf("%d %d %d", &a, &b, &c);

	vec[0] = a;
	vec[1] = b;
	vec[2] = c;

	std::vector<int> myvector (vec,vec + 3);

	std::sort (myvector.begin(), myvector.end());
    
	for(std::vector<int>::iterator it=myvector.begin();it!=myvector.end();++it)
		std::cout << *it <<'\n';
	printf("\n%d\n%d\n%d\n",a,b,c);
	
    return 0;
}
