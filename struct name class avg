/*Na grafei programma pou tha emfanizei ta stoixeia twn mathitwn se lista. 
H kathe grammh periexei to eponumo thn taksh kai ton meso oro kathe mathiti me ena dekadiko pshfio*/
#include <stdio.h>
#include <string.h>

int main(){
	int i;
struct stoixeia{
	char lastname[30];
	char claass[5];
	float avg;
	int age;
} students[2];	
	
	for (i=0;i<2;i++){
		printf("Type the name of student no. %d:\n",i+1);
		scanf("%s", students[i].lastname);
		printf("Type the class of student no. %d:\n",i+1);
		scanf("%s", students[i].claass);
		printf("Type the average grade of student no. %d:\n",i+1);
		scanf("%f", &students[i].avg);
		printf("Type the age of student no. %d:\n",i+1);
		scanf("%d", &students[i].age);
		printf("==================================\n");
	}
	
	printf("\n\n");
	printf("Name\tClass\tAvg\n");
	for(i=0;i<2;i++){
		printf("%s \t %s \t %.1f\n",students[i].lastname,students[i].claass,students[i].avg);
	}
	
	return 0;
}
