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
      pointers = a variable like reference that holds a memory to another variable, some tasks are more easy to do with pointers
      * = indirection operator, it is used to access the value of a pointer
      & = address operator, it is used to get the memory address of a variable
      int *p = &a; // p is a pointer that holds the memory address of a

*/

int main(){

      clearScreen();

      int age = 21;
      int *pAge = &age; // p is a pointer that holds the memory address of age
      printf("Address of age: %p\n", &age);
      printf("Value of pAge:  %p\n\n", pAge);

      printf("size of age: %d bytes\n", sizeof(age));
      printf("size of pAge: %d bytes\n\n", sizeof(pAge));

      printf("Value of age: %d\n", age);
      printf("Value at stored address: %d\n\n", *pAge);


      return 0;
}
