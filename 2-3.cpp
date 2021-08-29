#include <stdio.h>

int main(){
	
	int a, cnt=0, sum=0;
	
	while(cnt<12){
		printf("Type a number: ");
		scanf("%d", &a);
		cnt++;
		sum=sum+a;
	}
	printf("Sum = %d\n", sum);
	return 0;
}
