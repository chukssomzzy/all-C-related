# include <stdio.h> 

int main(){
    /* 
     * Character Data Type  
     *
     * A character data in ASCII is 8 byte and the most significant digit is left untouch, the remain 7 bit is used to store character where the conertion of the character can either be a number or letter e.g A in ASCII is 65 while C in ASCII is 67. 
     * hope you get the point
     */ 
    /*char myChar = 'A'; 
    printf("%c\n", myChar);

    That we done with cruize let scan that shit */ 
   /* printf("input a string or the code would break cause it extremely fragile: ");
    char myScanedChar; 
    scanf("%c", &myScanedChar); 
    // You can refer to the ASCII table for more detail
    printf("you inputed %c\n", myScanedChar);     */
          /*
           * 
           *
    mm    mmmm    mmm  mmmmm  mmmmm           mmm   mmmm  mm   m m    m mmmmmm
   ##   #"   " m"   "   #      #           m"   " m"  "m #"m  # "m  m" #
  #  #  "#mmm  #        #      #           #      #    # # #m #  #  #  #mmmmm
  #mm#      "# #        #      #           #      #    # #  # #  "mm"  #
 #    # "mmm#"  "mmm" mm#mm  mm#mm          "mmm"  #mm#  #   ##   ##   #mmmmm



 mmmmm   mmmm  mmmmm   mmmm  mm   m
 #   "# #"   "   #    m"  "m #"m  #
 #mmmm" "#mmm    #    #    # # #m #
 #   "m     "#   #    #    # #  # #
 #    " "mmm#" mm#mm   #mm#  #   ##
 *
 */ 
     char asciiChar; 
     printf("please enter a character for convertion:\n ");
     scanf("%c", &asciiChar);
     printf("magic your character is now a number %i\n",asciiChar);
     int toAscii; 
     printf("please enter a value from 0 - 127: "); 
     scanf("%i", &toAscii); 
     printf("your value to ascii is %c\n", toAscii);
      // doing math with characters 
      char mathChar = 'A' + '$';
      printf("A(65) + $(%d) = %c(%d))", '$', mathChar,mathChar);
    return 0;
}                         
