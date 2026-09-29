#include <stdio.h>
int main() {
int income = 0	;
int age = 0 ;
int Credit_score = 0 ;
char status_of_loan = 'N' ; 
	printf ("Enter age ") ;
	scanf ("%d", &age );
	
	printf ("Enter income ");
	scanf ("%d", &income );
	
	printf ("Enter Credit score ");
	scanf ("%d", &Credit_score );
	
	printf ("Enter (Y) if you have a loan  OR Enter (N) if you do not have a loan  " );
	scanf (" %c", &status_of_loan );
	
	
	if (age >= 21 && income >= 50000  && Credit_score >= 600 ){
		if (income >= 100000  && Credit_score >= 750  &&  status_of_loan == 'N' || status_of_loan == 'n' )
		printf ("High Approval Chance");
		
		else if (income >= 75000  && Credit_score >= 650 )
		printf ("Manual Review");
		
		else 
		printf ("Possibly Eligible");
}
	
	else 
	printf ("Rejected")	;
		
}

