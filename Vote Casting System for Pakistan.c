#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>

void castvote(int* arr)
{
   int choice;
   printf("\nPlease choose your Candidate.\n");
   printf("\t1. PTI\n");
   printf("\t2. PMLN\n");
   printf("\t3. PPP\n");
   printf("\t4. Back to Main\n");
   printf("Input your choice from 1-4 :\n ");
   scanf("%d",&choice);
   system("CLS");
   switch(choice)
   {
      case 1: 
		arr[0]++;
		break;
      case 2: 
		arr[1]++;
		break;
      case 3: 
		arr[2]++;
		break;
	  case 4:
		break;
   }
   
}
void votesCount(int* arr)
{		 	
   printf("Voting Statics:\n");
   printf("PTI - %d\n ", arr[0]);
   printf("PMLN - %d\n ", arr[1]);
   printf("PPP - %d\n ", arr[2]);
   
}
void Exit(int* arr){
	FILE *close_PTR;
	printf("Thank you for coming........");
	close_PTR=fopen("program.txt","w");
	putw(arr[0],close_PTR);
	putw(arr[1],close_PTR);
	putw(arr[2],close_PTR);
	fclose(close_PTR);
	exit(0);	
}
int main()
{
	int voting_array[3]={0,0,0};
	FILE *voting_PTR=fopen("program.txt","r");
	
	int i;
	for(i=0;1;i++)
	{
		int current_vote = getw(voting_PTR);
		if( current_vote== EOF ){
			break;
		}
		voting_array[i]=current_vote;
    }
    close(voting_PTR);
    
	int choice;		
	do{
		system("CLS");
		votesCount(voting_array);  	
	    
		printf("Welcome to Voting 2021...\n\n");
	    printf("Select 0,1 to proceed:\n\n");
	    printf("\t0. Exit\n");
	    printf("\t1. Cast the Vote\n");
    	printf("Please enter your choice: \n");
    	scanf("%d",&choice);
    	
		if(choice==0){
        	system("CLS");	
        	votesCount(voting_array);  
        	Exit(voting_array);
    	}
        else if(choice==1){
        	castvote(voting_array);	
		}
   }while(1);
   return 0;
}
