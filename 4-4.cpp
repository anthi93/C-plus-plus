#include <stdio.h>

int main(){
	int i, ar[10];
	
	printf("Enter 10 numbers to show them in reverse order\n");
	for(i=0; i<10; i++)
		scanf("%d", &ar[i]);

	printf("Reverse order\n");
	for(i=9; i>=0; i--)	
		printf("%d\n", ar[i]);

	return 0;
}
