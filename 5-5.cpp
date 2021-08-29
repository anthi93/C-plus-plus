/*Ti tha emfanisei to parakatw programma*/
#include <stdio.h>

int main(){
	int i,j,m,n;
	int a[6][5]={10,4,9,19,8,
			7,6,8,13,11,
			3,12,12,13,7,
			4,5,19,10,11,
			5,8,3,5,15,
			7,7,17,15,8};
	m=a[0][0];
	for(i=0;i<6;i++){
		n=0;
		for(j=0;j<5;j++){
			if(a[i][j]>m)
				m=a[i][j];
			if(a[i][j]>=10)
				n++;	
		}
		printf("%d\n",n);
	}
	printf("%d\n",m);
	
	return 0;
}
