#include <stdio.h>
#include <string.h>

struct test{
	char x;
	int y;
	double z;
	char lex[12];
};

int main(){
	
	struct test first, *ptr;
	first.x='A';
	strcpy(first.lex,"Peepeepoo");
	ptr=&first;
	
	printf("%s\n", ptr->lex);
	
	ptr->y=100;
	printf("%d", first.y);
	
	return 0;
}
