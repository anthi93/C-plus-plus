#include <stdio.h>

int main(){
	int i, a[20], pos, ar;
	bool found=false;
	
	for(i=0;i<20;i++)
		scanf("%d", &a[i]);
	printf("Enter number you want to find:\n");
	scanf("%d", &ar);
	
	for(i=0;i<20;i++)
		if(a[i]==ar){
			found=true;
			pos=i;
		}
	if(found==true)
		printf("Found in position %d.\n", pos+1);
	else
		printf("The item does not exist.\n");			
		

	return 0;
}

