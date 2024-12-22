#include <stdio.h>
#include <stdlib.h>

void clearScreen(){
      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif
}

/*    bit level programming
      bitwise operators are used to manipulate individual bits of an integer.
      The bitwise operators are:
            &   bitwise AND 
            |   bitwise OR 
            ^   bitwise XOR (exclusive OR)
            ~   bitwise NOT (one's complement)
            <<  bitwise left shift 
            >>  bitwise right shift 

*/

int main(){

      clearScreen();

      int x = 6;  // 6 = 00000110
      int y = 12; // 12 = 00001100
      int z = 0;  // 4 = 00000100

      z = x & y; // 00000100
      printf("AND = %d\n\n", z);

      z = x | y; // 00001110
      printf("OR = %d\n\n", z);

      z = x ^ y; // 00001010
      printf("XOR = %d\n\n", z);

      z = x << 1; // 00001100
      printf("Left Shift = %d\n\n", z);

      z = x >> 1; // 00001100
      printf("Left Shift = %d\n\n", z);

      return 0;
}
