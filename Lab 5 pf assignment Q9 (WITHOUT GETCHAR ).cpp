#include<stdio.h>
int main (){
char Problem_Type ;
char Algorithm ;	
	 
printf ("Select a Problem_Type \n a: Classification \n b: Regression \n c: Clustering \n d: Computer Vision, ");
scanf ("%c",&Problem_Type); 

switch (Problem_Type){

case 'a' :
case 'A' :
	printf ("Select a Algorithm \n a: Logistic Regression \n b: Decision Tree \n c: KNN");
		scanf ("%c",&Algorithm  );       
		switch (Algorithm){
			case 'a':
			case 'A':
			     printf ("Problem Type is Classification and Algorithm is Logistic Regression")	;
			break ;
			
			case 'b':
			case 'B':
			     printf ("Problem Type is Classification and Algorithm is  Decision Tree")	;
			break ;
			
			case 'c':
			case 'C':
			     printf ("Problem Type is Classification and Algorithm is  KNN")	;
			break ;
			     
	}
break ;	

case 'b':
case 'B': 	
	printf ("Select a Algorithm \n a: Linear Regression \n b:  Polynomial Regression \n c:  SVR");   
    scanf ("%c",&Algorithm);   
	 
	 switch (Algorithm){
			case 'a':
			case 'A':
			     printf ("Problem Type is Regression and Algorithm is Linear Regression")	;
			break ;
			
			case 'b':
			case 'B':
			     printf ("Problem Type is Regression and Algorithm is Polynomial Regression")	;
			break ;
			
			case 'c':
			case 'C':
			     printf ("Problem Type is Regression and Algorithm is SVR")	;
			break ;   }        
    
break ;  

case 'c' :
case 'C' :
	printf ("Select a Algorithm \n a: K-Means \n b: Hierarchical Clustering, \n c:  DBSCAN ");   
    scanf ("%c",&Algorithm);  
	
	switch (Algorithm){
			case 'a':
			case 'A':
			     printf ("Problem Type is Clustering and Algorithm is K-Means")	;
			break ;
			
			case 'b':
			case 'B':
			     printf ("Problem Type is Clustering and Algorithm is Hierarchical Clustering,")	;
			break ;
			
			case 'c':
			case 'C':
			     printf ("Problem Type is Clustering and Algorithm is DBSCAN")	;
			break ;           }
	 


break ;    

case 'd' :
case 'D' :
	printf ("Select a Algorithm \n a: CNN \n b: YOLO \n c:  R-CNN ");   
    scanf (" %c",&Algorithm);   
    
    switch (Algorithm){
			case 'a':
			case 'A':
			     printf ("Problem Type is Computer Vision and Algorithm is CNN")	;
			break ;
			
			case 'b':
			case 'B':
			     printf (" Problem Type is Computer Vision and Algorithm is YOLO ")	;
			break ;
			
			case 'c':
			case 'C':
			     printf (" Problem Type is Computer Vision and Algorithm is R-CNN ")	;
			break ;           }
break ;    
     printf ("invalid Input");
 }}
