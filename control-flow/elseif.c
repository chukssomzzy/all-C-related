# include <stdio.h> 
/*
 * add a patient 
 * search patients 
 * exist 
 * */

int main(){
    printf("Choose a menu option 1 - 4 \n"); 
    printf("1, add a patients\n");
     printf("2, View a patient\n"); 
     printf("3, search patients\n"); 
     printf("4, exit\n");
     int userInput; // what user wants to do with the menu  
     scanf("%d", &userInput);
     if( userInput == 1)  {
        printf("adding patients\n");
     } else if (userInput == 2){
        printf("Viewing a patient\n");
     } else if (userInput == 3){
        printf("searching patient\n");
     } else if (userInput == 4){
         printf("exited\n");
         printf("Do you want to save y/n: ");
         char quit;
         scanf("%c", &quit); 
         getchar();
         if(quit == 'y' || quit == 'Y'){
             printf("saving changes\n ") ;

         }else if(quit == 'n' || quit == 'N'){
             printf("Now we would have to reset you! Reseted \n")    ;
         }
     } else {
         printf("incorrect input!\n");
     }
    return 0;
}
