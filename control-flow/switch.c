#include <stdio.h> 
    /* Requirement 
     * How many slices of pizza you have eating 
     * then complain 
     */
int main(){    
    printf("How many slices of pizza have you eating: \n");
    int slices; 
    scanf("%d", &slices);

    switch(slices){
        case 1 : {
                printf("You did a great job!\n"); 
                break;
                 }
      case 2 : {
                 printf("You did an ok job\n");
                 break;
                 } 
      case 3 : {
                 printf("You did a bad job for just eating only 3 slices, three is a weird number\n") ;
                     break;
                 } 
      case 4 : {
                printf("You are sucessfully obsesed\n"); 
                break;
                 } 
      default : {
          printf("input a valid number\n");
          break;
      }
    }

    return 0;
}
