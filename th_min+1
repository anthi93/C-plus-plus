#include <stdio.h>
int main(){
	
	int i, th_min, th_max;
	float a[10], min, max;
	
	for(i=0;i<10;i++)
		scanf("%f", &a[i]);
	min=max=a[0];
	th_min=th_max=0;
	
	for(i=0;i<10;i++)
	{
		if(a[i]<min){
			min=a[i];
			th_min=i;
		}
		if(a[i]>max){
			max=a[i];
			th_max=i;
		}
	}
	printf("O mikroteros arithmos einai: %f sthn %dh thesi.\n", min, th_min+1);
	printf("O megaluteros arithmos einai: %f sth %dh thesi.\n", max, th_max+1);
	return 0;
}
