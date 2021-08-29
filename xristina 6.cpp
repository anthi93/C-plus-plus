#include <stdio.h>
int main(){
	float height, weight;
	float BMI=0;
	
	printf("Dwse mou to upsos se metra: /n");
	scanf("%f", &height);
	printf("Dwse kai to varos sou se kila: \n");
	scanf("%f", &weight);
	
	BMI=weight/(height*height);
	
	printf("To upsos sou einai %5.2f m kai to varos sou einai %5.2f kg \n", height, weight);
	printf("To BMI sou einai %f \n", BMI);
	
	if(BMI<=18.5)
		printf("Vasei tou BMI sou eisai underweight.\n");
	else if(BMI>18.5 && BMI<=25)
		printf("Vasei tou BMI sou eisai normal weight.\n");
	else if(BMI>25 && BMI<=30)
		printf("Vasei tou BMI sou eisai overweight.\n");
	else 
		printf("Vasei tou BMI sou eisai obese.\n");
	
	printf("\tBMI CHART\t\n");
	printf("\tUNDERWEIGHT: <= 18.5\t\n");
	printf("\tNORMAL WEIGHT: 18.5-24.9\t\n");
	printf("\tOVERWEIGHT: 25-29.9\t\n");
	printf("\tOBESE: > 30\t\n");
	return(0);
}
