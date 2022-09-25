# include <stdio.h> 
# include <stdbool.h> 
# include <math.h>

int main(){

    int i = 0;
    int compare = 10;
    int j = 0 ;
    while(i < compare){
       while(j <= i){
           printf("%i", j) ;
          j++;
       }
       printf("\n");
       j = 0;
       i++;
    }


    return 0;
}
