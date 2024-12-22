#include <stdio.h>
#include <stdlib.h>

/*
      getting user input in C is very simple, you just need to use the scanf function

*/

int main(){

      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif

      int age;
      char name[25];
      printf("\n");

      printf("How old are you?\n");
      scanf("%d", &age); // the & is used to get the address of the variable

      fgets(name, 25, stdin); // the fgets function is used to get a string from the user with spaces and a maximum of 25 characters.

      printf("\nYou are %d years old\n", age); // the %d is used to print the integer value

      printf("\n");
      return 0;
}
