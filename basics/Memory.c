#include <stdio.h>
#include <stdlib.h>

void clearScreen(){
      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif
}

/*    
      - memory = an array of bytes within RAM (street)
      - memory block = a single byte within memory (house), used to hold some   value (person)
      - memory address = the address of where a memory block is located (house - address)

*/

int main(){

      clearScreen();

      short a = 'X'; 
      int b = 'Y';
      double c = 'Z';


      printf("Size of 'a': %d bytes\n", sizeof(a)); // 1 byte
      printf("Size of 'b': %d bytes \n", sizeof(b)); // 1 byte
      printf("Size of 'c': %d bytes \n\n", sizeof(c)); // 1 byte

      printf("Memory address of a: %p\n", &a); // 0x7fffbf7b1b7f
      printf("Memory address of b: %p\n", &b); // 0x7fffbf7b1b7e
      printf("Memory address of c: %p\n\n", &c); // 0x7fffbf7b1b7d


      return 0;
}
