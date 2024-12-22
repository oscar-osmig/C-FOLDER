#include <stdio.h>
#include <stdlib.h>

void clearScreen(){
      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif
}

//typedef char user[50];

typedef struct 
{
      char name[12];
      char password[12];
      int id;

} User;

struct student
{
      char name[12];
      float gpa;
};

void structarray(){
      struct student student1 = {"John", 3.5};
      struct student student2 = {"Jane", 3.8};
      struct student student3 = {"Jim", 3.2};
      struct student student4 = {"Jill", 3.9};

      struct student students[] = {student1, student2, student3, student4};
      
      for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
      {
            printf("%-12s\t", students[i].name);
            printf("%.2f\n", students[i].gpa);
      }
}

int main(){

      clearScreen();
      // Typedef is a keyword that allows you to create an alias for a data type.

      // User user1 = {"John", "password", 1};
      // User user2 = {"Jane", "password", 2};

      // printf("%s\n" , user1.name);
      // printf("%s\n" , user1.password);
      // printf("%d\n\n" , user1.id);

      // printf("%s\n" , user2.name);
      // printf("%s\n", user2.password);
      // printf("%d\n\n" , user2.id);
      structarray();

      return 0;
}
