
#include<stdio.h>

int main (){

  int math = 0 ;
  int ai = 0 ; 
  int programing =0 ;
  int average = 0  ;
  int total = 0;
  
   printf ( " Enter your maths marks :");
   scanf ("%d", &math );
   
    
    printf ( " Enter your ai marks :");
   scanf ("%d", &ai );
   
   
   
    printf ( " Enter your programing marks :");
   scanf("%d", &programing );
   
   
   
   if ( math >= 50   &&   ai >= 50  && programing >= 50 )
   
   
    { average = (math + ai + programing)/3 ;
        
       switch (average /10 ){
	   
       
       
       
       case 10 :
       case 9 :
       case 8 : 
       
	     printf (" Excelent  Performance  "); 
	    break; 
	   
	   
	   case 7 :
	     printf (" Very Good  Performance  "); 
	    break ; 
	   
	   case 6 :
	     printf (" Good  Performance  "); 
	   break ;
	   
	    case 5 :
		 printf (" Satisfactory  Performance  ");
	    break ; 
	    
	    default :  printf (" Poor  Performance  "); 
	  break ;
	   }}
      
      
	else 
     printf (" Student is not eligible")  ;  
}



