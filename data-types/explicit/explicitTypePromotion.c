# include <stdio.h> 
 
int main(){

    int slices  = 17; // defines slices of pizza
    int people = 2; //defines how many people would get a cut  
      
    double pizzaPerPeople = slices / (double) people; 
    printf("%f", pizzaPerPeople);
    return 0;
}
