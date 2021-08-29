/*Se ena athlima vathmologountai apo omada 3 kritwn me akeraious vathmous apo 0-10. Gia kathe athliti h telikh tou vathmologia upologizetai ws o arithmitikos mesos
oros twn 3 vathmwn tou. Grapste programma pou gia dosmeno apo to xrhsth plithos athlitwn (oxi panw apo 15) diavazei tous vathmous ths kritikhs epitrophs kai
upologizei kai emfanizei sthn othonh tis telikes tous vathmologies me 1 dekadiko pshfio. To programma prepei na elegxei tuxon akurh eisodo (px vathmos ektos 0-10)
kai na termatizei me katallhlo mhnuma lathous. Oriste sumvolikes statheres opou xreiazetai*/

#include <stdio.h> 
#define NO_JUDGES 3 

main()
{

	int no_athletes, score, i, j; 
	float final_score;
 
	printf ("Enter number of athletes:\n");
	scanf("%d", &no_athletes);
	if (no_athletes>15){
		printf("Invalid number of athletes!");
		return(1);
	}
	
	int athletes[no_athletes][NO_JUDGES]; 
  
	
	for (i = 0; i < no_athletes; i++){
 		printf("Enter (%d) scores for athlete no. %d: ", NO_JUDGES, i + 1);
 		for (j = 0; j < NO_JUDGES; j++){
			scanf("%d", &score);
			if (score < 0 || score > 10){
				printf("Invalid score!\n");
 				return(2);
			}
			athletes[i][j] = score;
 		}
 	}
 	
 	for (i = 0; i < no_athletes; i++){

 		final_score = 0;
 		for (j = 0; j < NO_JUDGES; j++)
 			final_score += athletes[i][j];
 
 		final_score /= NO_JUDGES;
 		printf("Athlete no. %d: Final score = %.1f\n", i + 1, final_score);
 	}
 	return(0);
}

