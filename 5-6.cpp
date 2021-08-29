/*Xrhsh deiktwn*/
#include <stdio.h>

int main(){
	int i, yes=0, no=0;
	char ans[20];
	
	printf("Please enter 'Y' for Yes 'N' for No or 'D' for Dunno:\n");
	for(i=0;i<20;i++){
		
		scanf("%c", &ans[i]);
	}
	
	for(i=0;i<20;i++){
		if(*(ans+i)=='Y')
			yes++;
		if(*(ans+i)=='N')
			no++;
	}
	printf("%d people replied Yes.\n", yes);
	printf("%d people replied No.\n", no);
	return 0;
}
