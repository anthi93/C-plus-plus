/*Theoreiste thn akolouthi domi pou paristanei rhto arithmo dhl. klasma
struct fraction {
	int num; 		arithmiths
	int den;			paronomasths
};
typedef struct fraction Rational;
Rational r1,r2,r3;

kai upotheste oti oi metavlhthes r1 r2 r3 exoun parei times sta pedia tous
a. Grapste kwdika pou na upologizei sth metavlhth r3 to athroisma tous kai na to emfanizei sthn othonh 
epishs se morfh klasmatos.
Px gia tous rhtous arithmous 1/4 kai 3/2 na grafei to ekshs: 1/4+3/2=14/8. 
Ypotheste oti kaneis apo tous paronomastes den einai mhdenikos.
*/

#include <stdio.h>
#include <math.h>

int main(){
	struct fraction {
	int num; 		
	int den;		
};
typedef struct fraction Rational;
Rational r1,r2,r3;

r1.num=4;
r1.den=2;
r2.num=7;
r2.den=5;

r3.num = r1.num * r2.den + r2.num * r1.den; 
r3.den = r1.den * r2.den; 
printf("%d/%d+%d/%d=%d/%d\n", r1.num, r1.den, r2.num, r2.den, r3.num, r3.den); 

return 0;
}
