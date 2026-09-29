#include<stdio.h>
int main(){
int Confidence ;
	
printf (" Enter the confidence score ")	;
scanf ("%d", &Confidence );
  
  
if (Confidence>= 50){


printf ("Accepted \n ");
   if (Confidence >= 90){
    printf("Very High");
                     }
                     
    else if (Confidence >= 75){
    printf("High");
                     } 
					 
	else 
    printf("Moderate");
                  }
 else 
  printf ("Low");}
 
                     
					                    

