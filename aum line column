/*Upologismos kai emfanish athroismatos kathe grammhs & megaluterhs timhs kathe sthlhs se pinaka 2D*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,j,a[10][5],max,sum;
	
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			a[i][j]=i*j;
			
	for(i=0;i<10;i++){
		sum=0;
		for(j=0;j<5;j++)
			sum+=a[i][j];
		printf("Athroisma grammhs %d = %d\n",i,sum);
	}
	
	for(j=0;j<5;j++){
	
		max=a[0][j];
		for(i=0;i<10;i++)
			if(a[i][j]>max) max=a[i][j];
		printf("Megisth timh sthlhs %d = %d\n",j,max);	
			
	}
	return 0;
}
