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
	
	if(x>y){
		if(x>z){
			if(y>z){		/* x>y>z */
				k3=x;
				k2=y;
				k1=z;
			}else{			/* x>z>y */
				k3=x;
				k2=z;
				k1=y;
			}
		}else{				/* z>x>y */
			k3=z;
			k2=x;
			k1=y;
		}
	}else{					/* y>x */
		if(y>z){			/* y>x kai y>z. Ti paizei metaksu x kai z?*/
			if(x>z){		/* y>x>z */
				k3=y;
				k2=x;
				k1=z;
			}else{			/* y>x y>z z>x ara y>z>x */
				k3=y;
				k2=z;
				k1=x;
			}
		}else{				/* y>x kai z>y ara z>y>x */
			k3=z;
			k2=y;
			k1=x;
		}
	}
	
	printf("%d < %d < %d\n", k1, k2, k3);
	mo13=(k1+k3)/2;
	
	printf("O mesos oros einai %.2f\n", mo13);
	if(mo13>k2)
		printf("O mesos oros einai megaluteros apo ton mesaio arithmo: %.2f > %d\n", mo13, k2);
	else
		printf("Error!\n");
		
	return(0);		
}
