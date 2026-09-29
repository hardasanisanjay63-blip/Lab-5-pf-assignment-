#include<stdio.h>
int main (){
char Category ;
char Subcategory ;	
	 
printf ("Select a Category \n a: Animal \n b: Vehicle \n c: Food \n d: Human ");
scanf ("%c",&Category);


if (Category == 'a' || Category == 'A')  {
	printf ("Select a Subcategory \n a: Cat \n b: Dog \n c: Bird");
		scanf ("%c",&Subcategory);       }
		
		

else if (Category == 'b'||  Category == 'B'){
	printf ("Select a Subcategory \n a: Car \n b: Bus \n c: Bike ");   
    scanf ("%c",&Subcategory);             }

else if (Category == 'c'||  Category == 'C'){
	printf ("Select a Subcategory \n a: Pizza \n b:Burger \n c: Briyani ");   
    scanf ("%c",&Subcategory);   }

else if (Category == 'd'||  Category == 'D'){
	printf ("Select a Subcategory \n a: Male \n b: Female \n c: Child ");   
    scanf ("%c",&Subcategory);   }

else 
printf ("invalid Input");
}
