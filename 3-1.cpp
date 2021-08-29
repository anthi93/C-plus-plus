#include <stdio.h>
int main(){
	int k1,k2,k3,x,y,z;
	float mo13;
	
	printf("Dose ton prwto arithmo:\n");
	scanf("%d", &x);
	
	printf("Dose ton deutero arithmo:\n");
	scanf("%d", &y);
	
	printf("Dose ton trito arithmo:\n");
	scanf("%d", &z);
	
	printf("x: %d, y: %d, z: %d\n", x,y,z);
	
	if(x>y && x>z){			/* To x einai to megalutero*/
		if(y>z){			/* y to mesaio kai z to mikrotero*/
			k3=x;
			k2=y;
			k1=z;
		}else{				/* z to mesaio kai y to mikrotero*/
			k3=x;
			k2=z;
			k1=y;
		}
	}
	if(y>x && y>z){
		if(x>z){
			k3=y;
			k2=x;
			k1=z;
		}else{
			k3=y;
			k2=z;
			k1=x;
		}
	}
	if(z>x && z>y){
		if(x>y){
			k3=z;
			k2=x;
			k1=y;
		}else{
			k3=z;
			k2=y;
			k1=x;
		}
	}
	
	printf("%d < %d < %d\n", k1, k2, k3);
	mo13=(k1+k3)/2;
	
	printf("O mesos oros einai %f\n", mo13);
	if(mo13>k2)
		printf("O mesos oros einai megaluteros apo ton mesaio arithmo: %f > %d\n", mo13, k2);
	else
		printf("Error!\n");
		
	return(0);		
}
