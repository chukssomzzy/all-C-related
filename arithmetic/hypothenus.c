# include <stdio.h>  
# include <math.h>

int main (){
    double ajacent; 
    double opposite; 

    printf("input the ajacent\n") ;
    scanf("%lf",&ajacent); 
    printf("input the opposite\n") ;
    scanf("%lf", &opposite);

    double hypothenus = sqrt((ajacent * ajacent) * (opposite * opposite));

    printf("the hypothenus of your triangle is %f\n", hypothenus);
    

    return 0;
}
