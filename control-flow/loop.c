# include <stdio.h> 


int main ()
{
    /* ---- For Loop ---  */ 
    // initialization
    //  Comparism 
    //  update
    int minNumber ; 
    int maxNumber; 
    printf("Where should i start conting: \n");
        scanf("%d", &minNumber); 
        printf("where would you like the loop to end \n"); 
        scanf("%d", &maxNumber);
        if(minNumber  >= maxNumber){
            printf("Enter valid numbers");
        }
    for(int i = minNumber; i < maxNumber; i++){
     printf("%d\n", i);
    }

        return 0;
}

