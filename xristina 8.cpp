#include <stdio.h>
int main(){
	float a,b;
	char ch;
	
	printf("Dose duo arithmous kai ena sumvolo prakshs: \n");
	scanf("%f %f %c", &a, &b, &ch);
	
	switch(ch)
	{
		case '+':
			printf("To athroisma einai %f\n", a+b);
			break;
		case '-':
			printf("H diafora einai %f\n", a-b);
			break;
		case '*':
			printf("To ginomeno einai %f\n", a*b);
			break;
		case '/':
			if(b!=0){
				printf("To phliko einai %f\n", a/b);
				break;
			}
			else{
				printf("Error!!\n");
				break;
			}
		default:
			printf("Lathos sumvolo\n");				
	}
	
	return(0);
}
