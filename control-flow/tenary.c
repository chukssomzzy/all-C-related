# include <stdio.h> 
# include <stdbool.h>


int main(){
      double money = 20 ; 
      double cost = 25; 
      double toAfford = cost - money;                

      money > cost ?
          printf("you can afford it but at what cost? ") :
           printf("Yiu would need to get more %lf to afford this delicacy",toAfford);
    return 0;
}
