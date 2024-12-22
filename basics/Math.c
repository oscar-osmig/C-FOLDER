#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clearScreen(){
      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif
}

int main(){

      clearScreen();
      double a = sqrt(25); // 5
      double b = pow(2, 3); // 8
      double c = ceil(2.3); // 3
      double d = floor(2.3); // 2
      double e = fabs(-2.3); // 2.3
      double f = fmod(3, 2); // 1
      double g = log(2.71828); // 1
      double h = log10(100); // 2
      double i = exp(1); // 2.71828
      double s = pow(2, 3); // 8
      double u = tan(0.785398); // 1
      double v = sin(1.570796); // 1
      double w = cos(0); // 1



      printf("\n %.1lf\n", a);


      return 0;
}
