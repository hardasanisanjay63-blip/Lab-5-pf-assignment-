#include<stdio.h>
int main(){
int Permission_Value = 0 ;
printf(" Enter the permission value ");
scanf(" %d", &Permission_Value )	;
if (Permission_Value >= 8){
	 printf("\n Permission granted for Deploy");
	
	  Permission_Value = (Permission_Value -8 );
}
if (Permission_Value >= 4){
	 printf("\n Permission granted for Test");

 
	  Permission_Value = (Permission_Value -4 );
}

if (Permission_Value >= 2){
	 printf("\n Permission granted for Train");
	
	
	  Permission_Value = (Permission_Value -2 );
}

if (Permission_Value >= 1){
	 printf("\n Permission granted for View");
	 
	
	 Permission_Value = (Permission_Value -1 );
}

	
}
	
