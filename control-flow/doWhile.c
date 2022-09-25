# include <stdio.h> 


int main (){

        int input; 
        do{
         printf("Enter a value from 0 - 9: \n");
         scanf("%i", &input);
         getchar();
        }while(input < 0 || input > 10);
        
    return 0;
}
