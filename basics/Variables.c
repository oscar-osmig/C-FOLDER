#include <stdio.h>
#include <stdlib.h>

/*
      VARIABLES IN C
      - Variables are containers for storing data values.

*/

int main(){

      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif

      int x; // Declares a variable named x of type int
      x = 123; // Assigns the value 123 to the variable x
      int y = 321; // Declares a variable named y of type int and assigns the value 321 to it

      int age = 21; // integer (whole number)
      float gpa = 3.5; // floating point number
      char grade = 'A'; // character
      char phrase[] = "bro im good at coding"; // string (array of characters)

      printf("\n%s", phrase);
      printf("\nyou are %d years old", age);
      printf("\nyou have a %.2f gpa", gpa);
      printf("\nyou got a %c in your last exam\n\n", grade);


      return 0;
}
