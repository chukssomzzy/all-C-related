
# include <stdio.h> 
# include <stdbool.h>

int main(){
    bool isHealthy;
    printf("Do you love pizza 1 is true and 0 is false: ");
    int temp; // takes user input for is Healthy and cover later
    scanf("%d", &temp);
    isHealthy = temp;
    if(isHealthy){ // true as long as not zero
        // willl run only whrn my hard coded isHealthy is true 
        printf("welcome to pizza app\n");
    }
}
