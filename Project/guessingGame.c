# include <stdio.h> 
# include <stdbool.h>
# include <stdlib.h>
# include <time.h>
int main(){
    // Genrate a random number  
    // pseudo random number generator 
    // seeded pseudo random random 
    // outputs a value 
    int maxValue = 6;
    srand(time(NULL)); 
    int randomNumber = rand() % maxValue;
    printf("%d\n",randomNumber);

    printf("guess a number 0 - %d:\n ", maxValue); 
    int userRandomInput; 
    scanf("%d", &userRandomInput);
       if(userRandomInput == randomNumber){
          printf("You win!\n") ;
       } else {
           printf("Better luck next time\n") ;
       }
       printf("Thank you for playing\n");
    return 0;
}
