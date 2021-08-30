/* Se mia kalokairini periodo katagrafetai h megisth thermokrasia kathe imeras 
kai zhteitai na upologistei poses ap autes tis metrhseis einai sta oria 35-40 C. 
O parakatw pseudokwdikas perigrafei algorithmo gia ton skopo auto. 
To plithos twn metrhsewn N dinetai ap ton xrhsth.
vima 0: diavase to plithos thermokrasiwn N
vima 1: c <- 0
vima 2: An N<=0 phgaine sto vima 9
vima 3: i <- 0 
vima 4: diavase mia thermokrasia T
vima 5: an 35<=T<=40, c<-c+1
vima 6: i<-i+1
vima 7: an i=N phgaine sto vima 9
vima 8: phgaine sto vima 4
vima 9: tupwse to apotelesma c
*/

#include <stdio.h>
#define LOWER 35
#define UPPER 40

main(){
	
 	int N, c, i;
 	int T;
 	
 	printf("How many measurements? ");
 	scanf("%d", &N);
 	if (N <= 0){
		printf("No temperature measurements!\n");
		return(1); 
	}
	
	c = 0;
 	printf("Enter %d temperature measurements:\n", N);
 	for (i = 0; i < N; i++){
 		scanf("%d", &T);
 		if (T >= LOWER && T <= UPPER){
 			c++;
 		}
 	}
	printf("%d measurements between %d and %d degrees\n", c, LOWER, UPPER);
	return(0);
} 
