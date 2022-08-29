# include <stdio.h> 
 
int main(){
    int radius; 
    printf("please enter a radius: ") ;
    scanf("%i", &radius);
    double pie = 3.141 ;
    double area = pie * ( radius * radius);
    printf("The area of circle of radius %i is %f\n", radius, area);
    return 0 ;
}
