#include <stdio.h>

int main(){
	
	int a,b,k=4;
	for(a=1;a<=9;a=a+3){
		--k;
		for(b=1;b<=5;b++)
			k=k+2;
	}
	printf("k=%d\n",k);
	
	return 0;
}
