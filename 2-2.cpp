#include <stdio.h>

int main(){
	float a,b;
	
	printf("Type 2 numbers:");
	scanf("%f %f", &a, &b);
	
	while(b==0){
		printf("Impossible to divide by zero.\n");
		return 1;
	}	
	printf("The result of the division is %f .",a/b);
	return 0;
}
