
/* Programma pou zhta vathmologies se 3 mathimata gia 10 foithtes. Na emfanizei to plithos twn foithtwn poy aristeusan (m.o. vathmologias >=8.5)
kathws kai to plithos twn foithtwn pou apetuxan (m.o. vathmologias<5). Oi apodektes times gia vathmous einai apo 0-10.*/

#include <stdio.h>
int main(){
	float b1, b2, b3, mo;
	int par=0, pap=0, i;
	
	for(i=1;i<=10;i++){
		
		do{
			printf("Enter the %d student's grades: ", i);
			scanf("%f %f %f", &b1, &b2, &b3);
		}while(!((b1>=0 && b1<=10)&&(b2>=0 && b2<=10)&&(b3>=0 && b3<=10)));
		mo=(b1+b2+b3)/3;
		if (mo>=8.5)
			par++;
		if (mo<5)
			pap++;
	}
	printf("Plithos aristouxwn: %d\n", par);
	printf("Plithos apotuxontwn: %d\n", pap);
	
	return 0;
}

