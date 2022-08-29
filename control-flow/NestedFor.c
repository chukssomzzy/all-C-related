# include <stdio.h> 


int main (){   
 int minNumber ; 
    int maxNumber; 
    printf("Where should i start conting: \n");
        scanf("%d", &minNumber); 
        printf("where would you like the loop to end \n"); 
        scanf("%d", &maxNumber); 
       for(int m = minNumber; m < maxNumber; m++ )
       {
           for(int n = minNumber ; n < m; n++) {
               printf("%i", n) ;
           }
           printf("\n");
       }
    return 0;
}
