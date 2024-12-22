#include <stdio.h>
#include <stdlib.h>



int main(){
      
      // This checks if the operating system is Windows or not and clears the screen accordingly.
      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif

      // comments are ignored by the compiler (lol)
      /* 
            This is a multi-line comment
            It's also ignored by the compiler (lol)
      */
      
      /* 
            Escape sequences are used to represent special characters in strings.
            They are represented by a backslash followed by a character.
            For example, 
            '\n' represents a new line.
            '\t' represents a tab.
            '\b' represents a backspace.
            '\r' represents a carriage return.
            '\\' represents a backslash.
            '\'' represents a single quote.
            '\"' represents a double quote.
            '\0' represents a null character.
            
            Here are some examples:
            
            printf("Hello, World!\n");
            printf("Hello, \tWorld!\n");
            printf("Hello, \bWorld!\n");
            printf("Hello, \rWorld!\n");
            printf("Hello, \\World!\n");
            printf("Hello, \'World!\n");
            printf("Hello, \"World!\n");
            printf("Hello, \0World!\n");
            
            The output of the above code would be:

            Hello, World!
            Hello, 	World!
            Hello, World!
            World!
            Hello, \World!
            Hello, 'World!
            Hello, "World!
            Hello, World!


      */
      printf("1\n\t2\n\t\t3\n\t\t\t4\n\t\t\t\t5\n\t\t\t\t\t6\n\t\t\t\t\t\t7\n\t\t\t\t\t\t\t8\n\t\t\t\t\t\t\t\t9\n\t\t\t\t\t\t\t\t\t10\n");


      return 0;
}
