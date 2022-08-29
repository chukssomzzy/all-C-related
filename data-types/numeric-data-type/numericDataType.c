# include <stdio.h> 

int main(){
       /* 
        * primitive fata types in C programming are `int double and float`
        *  int for a numeric value with out fractional parts
        *  float is you when you are looking to store thing with lesser precisiom 
        *  double is used when you are trying to store things with higher precision
        */
    int dogs = 6; // int are used for thing that require less precision or there arecno fractional parts like in this example 
      printf("%i %f %f\n", 1, 1.1111, 1.11111F);// here printf converts the float data passed to it to a double      
       /*
        * scientific Notation 
        * I know you wondering what scientific notation don't worry we are going to 
        * find out real soon let go 
        * 
        * by the way floating point numbers ate stored in the form scientific notation
        *  Ok now i get mechee! 
        *
        *
        */
         // Hardcoding a scientific notation 
     //250000 
     int numSN = 2.5e4; 
     //soft coding a SN 
     /* 
      * Convertion Characters
      *---------------------
      * %f - Decimal notation 
      * %e - Scientific notation 
      * %g - Computer decided 
      */ 
     double dogsDouble = 2.5e4; 
     printf("%f\n%e\n%g\n", dogsDouble, dogsDouble, dogsDouble);
     // Scan in the variables from standard input 
     printf("How many dogs do you have: "); 
     double scanDog; 
     scanf("%lf", &scanDog); 
     printf("%f\n%e\n%g\n", scanDog, scanDog, scanDog);

    return 0;
}
