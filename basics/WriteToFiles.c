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
      The fopen() function is used to open a file. It returns a pointer to the file. 
      The first argument is the name of the file to be opened. 
      The second argument is the mode in which the file is to be opened. 
      The mode can be read, write, append, etc. 
      The fopen() function returns NULL if the file cannot be opened. 
      The fopen() function is defined in the stdio.h header file

      -- Modes --
      r: Opens a file in read mode. The file must exist.
      w: Opens a file in write mode. If the file exists, it is overwritten. If the file does not exist, a new file is created.
      a: Opens a file in append mode. If the file exists, the data is written at the end of the file. If the file does not exist, a new file is created.
      r+: Opens a file in read/write mode. The file must exist.
      w+: Opens a file in read/write mode. If the file exists, it is overwritten. If the file does not exist, a new file is created.
      a+: Opens a file in read/write mode. If the file exists, the data is written at the end of the file. If the file does not exist, a new file is created.
      
*/

int main(){

      clearScreen();

      /* 
            FILE *filePointer = fopen("txt-files/file.txt", "a"); 

            fprintf(filePointer, "\nI like to code!");

            fclose(filePointer);
      */
      
      /* 
            removing the file

            char fileName[] = "txt-files/file.txt";
            if (remove(fileName) == 0) {
                  printf("\nDeleted file %s successfully", fileName);
            } else
            {
                  printf("\nUnable to delete the file %s \n\n", fileName);
            }
      */
      char fileName[] = "C:\\Users\\osmig\\OneDrive\\Desktop\\C FOLDER\\basics\\txt-files\\peom.txt";
      FILE *filePointer = fopen(fileName, "r");

      char singleLine[255];

      if(filePointer == NULL){
            printf("\nUnable to open %s file\n", fileName);
            return 1;
      }else{
            printf("\n%s file opened successfully\n\n", fileName);
      }

      while (fgets(singleLine, 255, filePointer) != NULL){ // feof() function checks if the end of the file has been reached
      
            printf("\n%s", singleLine);
      }

      fclose(filePointer);
      printf("\n\n");

      return 0;
}
