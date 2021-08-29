#include <stdio.h>
int main(){
	float b1,b2,b3,mo;
	
	printf("Dose mou 3 vathmous: \n");
	scanf("%f %f %f", &b1, &b2, &b3);
	mo=(b1+b2+b3)/3;
	
	if(mo>=5 && mo<=10)
		printf("Mesos oros %f: Vathmos provivasimos\n", mo);
	else if (mo<5 && mo>=0) 
		printf("Mesos oros %f: Vathmos mh provivasimos\n", mo);
	else
		printf("Akuros vathmos. Vale vathmous apo 0-10\n");
	return(0);
	
}
