# include <stdio.h> 
# include <stdbool.h> 
# include <math.h>

int main(){
    int howPrime = 0; 
    int primeSum; 
    bool isPrime= true;
    printf("input a number to find the prime: \n");
    scanf("%i\n", &primeSum ); 

    for(int m  = primeSum ; m > 1 ; m--){
        for(int n = sqrt(m) ; n > 1; n--){
           if( m % n == 0){
               isPrime = false;
           }
           
        }

        if(isPrime){
          printf("%i is a prime factor of %i\n", m, primeSum); 
          howPrime++ ;
        } else {
            isPrime = true;
        }
        
    }

    printf("Your prime number has %i primes \n ", howPrime); 
    return 0;
}
