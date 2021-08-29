#include <stdio.h>
#include <stdlib.h>

typedef char onoma[15];
struct stoixeia{
	onoma o;				//char o[15];
	char address[20];
	int age;
};

typedef struct stoixeia tmima[20];
typedef int metritis;

int main(){
	tmima a_etos;				//struct stoixeia a_etos[20];
	metritis i;					//int i;
	
	for(i=0;i<20;i++)
		a_etos[i].age=rand()%3+18;		//kataxwrei tuxaio arithmo apo 18-20
	for(i=0;i<20;i++)
		printf("%d\n", a_etos[i].age);
		
	return 0;			
}
