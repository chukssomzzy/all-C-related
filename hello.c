# include <stdio.h> 

int main(){
   /* int x = 10;   // hard coding is not flexible 
    int y = 10 / 5;
    // syntax = form format of the language
   // i have past seeing hello world printf("hello somzzy \n");
    printf("The magic number is: %i\nThe starting value is %i\n", y, x);  // the string in the printf is known as a format string  */
    
     int radius; 
     printf("please input a radius\n");
     scanf("%i", &radius); //address-of operator
     printf("%i\n",radius);
    return 0; 
}
