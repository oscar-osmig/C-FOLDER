#include <stdio.h>
#include <stdlib.h>

void clearScreen(){
      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif
}

int main(){

      clearScreen();



      printf("I'm not a pizza\n\n");


      return 0;
}
