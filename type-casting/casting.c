#include <stdio.h> 

int main(){
    printf("The number of eggs for the day: ");
     int eggs ;  // future me i known what you are thinking why the fuck did he name this eggs just chill and continue reading 

    scanf("%i",  &eggs); 
    int numDozen = 12; // i just don't like writing things directly
    double dozen = (double) eggs / numDozen; //try removing the double in parentesis and run the program 
    printf("You have %f dozen eggs. \n", dozen); // basically this works like a really stupid calculator
    return 0;
}
