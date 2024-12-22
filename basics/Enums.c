#include <stdio.h>
#include <stdlib.h>

void clearScreen(){
      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif
}
// Enums are user-defined data types that consist of integral constants.
// The enum keyword is used to declare an enumeration, a distinct type consisting of a set of named constants called enumerators.
// Each enumerator is a constant whose type is the enumeration.
// An enumeration is defined using the following syntax:
enum Days {SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURSDA =5, FRIDAY = 6, SATURDAY = 7};

int main(){

      clearScreen();
      // Enums are user-defined data types that consist of integral constants.

      enum Days today = MONDAY;

      if(today == SUNDAY || today == SATURDAY){
            printf("\n it's the weakend, party time!\n");
      }else{
            printf("\n it's a work day, get to work!\n\n");
      }


      return 0;
}
