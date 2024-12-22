#include <stdio.h>
#include <stdlib.h>

void clearScreen(){
      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif
}


 struct Player{
            char name[50];
            float score;
      };


int main(){

      clearScreen();

      // Structs are a way to group variables together
      // They are like classes in other languages
      // They are used to group related data together
      // They are used to create complex data types
      // They are used to create user defined data types
      // They are used to create records
      // They are used to create objects
      // 
      // Syntax:
      // struct structName{
      //      dataType member1;
      //      dataType member2;
      //      ...
      //      dataType memberN;
      // };
      //
      // struct structName objectName;
      // objectName.member1 = value1;
      // objectName.member2 = value2;
      // ...
      // objectName.memberN = valueN;

      struct Player player1;
      struct Player player2;

      strcpy(player1.name, "John");
      player1.score = 100.0;

      strcpy(player2.name, "Jane");
      player2.score = 200.0;
      

      printf("I'm not a pizza\n\n");


      return 0;
}
