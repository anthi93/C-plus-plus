/*Upologismos kai emfanish megisths-elaxisths timhs se pinaka 2D*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,a[10][5],max,min;
	
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			a[i][j]=rand();
	max=min=a[0][0];
	for(i=0;i<10;i++)
		for(j=0;j<5;j++){
			if(a[i][j]<min)
				min=a[i][j];
			if(a[i][j]>max)
				max=a[i][j];	
		}
				
	for(i=0;i<10;i++){
		for(j=0;j<5;j++)
			printf("%6d  ", a[i][j]);
		printf("\n");	
	}
	
	printf("Megaluterh timh = %d\n", max);
	printf("Mikroterh timh = %d\n", min);
	
	return 0;
}
