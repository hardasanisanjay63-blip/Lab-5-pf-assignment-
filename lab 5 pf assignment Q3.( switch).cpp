#include<stdio.h>
int main (){
char Category ;
char Subcategory ;	
	 
printf ("Select a Category \n a: Animal \n b: Vehicle \n c: Food \n d: Human ");
scanf ("%c",&Category);

switch (Category){

case 'a' :
case 'A' :
	printf ("Select a Subcategory \n a: Cat \n b: Dog \n c: Bird");
		scanf ("%c",&Subcategory  );       
		switch (Subcategory){
			case 'a':
			case 'A':
			     printf ("Category is animal and Subcategory is Cat")	;
			break ;
			
			case 'b':
			case 'B':
			     printf ("Category is animal and Subcategory is Dog")	;
			break ;
			
			case 'c':
			case 'C':
			     printf ("Category is animal and Subcategory is Bird")	;
			break ;
			     
		}
break ;	

case 'b':
case 'B': 	
	printf ("Select a Subcategory \n a: Car \n b: Bus \n c: Bike ");   
    scanf ("%c",&Subcategory);  
	 
	 switch (Subcategory){
			case 'a':
			case 'A':
			     printf ("Category is Vehicle and Subcategory is Car")	;
			break ;
			
			case 'b':
			case 'B':
			     printf ("Category is Vehicle and Subcategory is Bus")	;
			break ;
			
			case 'c':
			case 'C':
			     printf ("Category is Vehicle and Subcategory is Bike")	;
			break ;   }        
    
break ;    

case 'c' :
case 'C' :
	printf ("Select a Subcategory \n a: Pizza \n b:Burger \n c: Briyani ");   
    scanf ("%c",&Subcategory);  
	
	switch (Subcategory){
			case 'a':
			case 'A':
			     printf ("Category is Food and Subcategory is Pizza")	;
			break ;
			
			case 'b':
			case 'B':
			     printf ("Category is Food and Subcategory is Burger")	;
			break ;
			
			case 'c':
			case 'C':
			     printf ("Category is Food and Subcategory is Briyani")	;
			break ;           
	 


break ;    

case 'd' :
case 'D' :
	printf ("Select a Subcategory \n a: Male \n b: Female \n c: Child ");   
    scanf ("%c",&Subcategory);   
    
    switch (Subcategory){
			case 'a':
			case 'A':
			     printf ("Category is Human and Subcategory is Male")	;
			break ;
			
			case 'b':
			case 'B':
			     printf ("Category is Human and Subcategory is Female")	;
			break ;
			
			case 'c':
			case 'C':
			     printf ("Category is Human and Subcategory is Child")	;
			break ;           
break ;    

default :
     printf ("invalid Input");
 }}}}

