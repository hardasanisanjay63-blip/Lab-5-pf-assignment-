#include <stdio.h>
int main(){
	
	int Ai_face_recognition = 0 ;
	char User_type ;
	
	printf ("Enter the Ai face recognition confidence score: ");
	scanf ("%d",&Ai_face_recognition);
	
	
	 printf ("Enter the User type :  \n A : Authorised \n B : Unauthorised  ");
	 scanf (" s%c",&User_type);
	
	  
	  
	  if (Ai_face_recognition < 50  || User_type == 'B' || User_type == 'b' ){ 
	  
	  printf ("Access Denied ");  }
	  
	  
	  else if (Ai_face_recognition >= 80  ) {
	  	
		  if (User_type == 'A' || User_type == 'a' ){ 
	  
	  printf ("Access Granted ");  }
	  
	      else 
	      printf ("Face Recognized");
	}
	  
	  
	  else 
	  	printf ("Manual Verification ");
	  
	  
	  
	                                    
	  }
	



