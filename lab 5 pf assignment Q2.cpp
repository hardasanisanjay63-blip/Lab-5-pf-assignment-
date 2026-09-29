#include <stdio.h>
int main() {
int income = 0	;
int age = 0 ;
int Credit_score = 0 ;
char status_of_loan = 'N'  ; 
	printf ("Enter age ") ;
	scanf ("%d", &age );
	
	printf ("Enter income ");
	scanf ("%d", &income );
	
	printf ("Enter Credit score ");
	scanf ("%d", &Credit_score );
	
	printf ("Enter (Y) if you have a loan  OR Enter (Y) if you do not have a loan  " );
	scanf (" %c", &status_of_loan );
	
	
	printf (" %c", status_of_loan );
}
	 
	

