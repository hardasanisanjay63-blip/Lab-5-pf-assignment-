#include<stdio.h>
#include<math.h>
int main(){
	
int AI_models_accuracy ;	
int confidence_score ;	
int dataset_size ;	
int user_role ;
int Model_Status ;
int Permissions ;
int Model_Score ;
	
	
	printf("Enter AI models accuracy ");
	scanf("%d", &AI_models_accuracy);
	printf("Enter confidence score ");
	scanf("%d",&confidence_score);
	printf("Enter dataset size ");
	scanf("%d", &dataset_size);
	printf("Enter User Roles: 1 = Admin, 2 = Developer, 3 = Researcher ");
	scanf("%d",&user_role);
	printf("Enter Model Status: 1 = Ready, 2 = Testing, 3 = Training ");
	scanf("%d",&Model_Status);
	printf("Enter Permissions: View = 1, Train = 2, Test = 4, Deploy = 8 ");
	scanf("%d",&Permissions);
	
	if (AI_models_accuracy >= 80 && confidence_score >= 75 && dataset_size >= 1000 && Model_Status == 1 && Permissions >= 8 ) {
	
	printf ("\nDeployment Ready\n");
}
	else {

	printf ("\nDeployment Not Ready\n");}
	
	
Model_Score = (AI_models_accuracy + confidence_score)/2	;
	printf ("\nModel score is %d \n", Model_Score );
	
switch (user_role)	{

	case 1 :
		printf ("\nUser is Admin\n");
	break ;	
	case 2 :
		printf ("\nUser is Developer\n");
	break ;	
	case 3 :
		printf ("\nUser is Researcher\n");
		break;
	default :
	printf (" \nInvalid input\n"); 
}
	
if 	(Permissions >= 8 ){
	printf("\nPermission is to Deploy\n");
}

else if 	(Permissions >= 4 ){
	printf("\nPermission is to Test\n");
}

else if 	(Permissions >= 2 ){
	printf("\nPermission is to Train\n");
}

else if 	(Permissions >= 1 ){
	printf("\nPermission is to View\n");}
	
else 
	printf ("\nInvalid Input\n");

switch(Model_Status){
	
	
	case 1 :
		printf ("\nModel is ready\n");
	break ;	
	case 2 :
		printf ("\nModel is Testing\n");
	break ;	
	case 3 :
		printf ("\nModel is Training\n");
		break;
	default :
	printf ("\n Invalid input\n"); 
	
}



}
		

