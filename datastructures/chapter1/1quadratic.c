#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int roots(double a, double b, double c, double result[]);

int main(int argc, char *argv[]){
double a,b,c;
char *arg;
double results[2];
  if(argc < 4) 
  {
    printf("Error, incorrect number of arguments\n");
    return -1;
  }

  a = strtod(argv[1],&arg);
  b = strtod(argv[2],&arg);
  c = strtod(argv[3],&arg);

  printf("args are %f %f %f \n",a,b,c);

  int rt = roots(a,b,c,results);
  if(rt == 0){
    printf("Success, roots are %f %f \n",results[0],results[1]);
  }
    
}


int roots(double a, double b, double c, double result[]){
  if (a ==0) {
    printf("Error, a cannot be zero\n");
    return -1;
  }
  
  double b_plus, b_minus;

  // plus 
  b_plus = -1*(b) + sqrt( b * b - (4 * a * c));
  printf("b_pls = %f\n",b_plus);

  // minus
  b_minus = -1*(b) - sqrt(b * b - (4 * a * c));
  printf("b_minus = %f\n",b_minus);

  result[0] = b_plus / (2 * a);
  result[1] = b_minus / (2 * a);

  return 0;
}
