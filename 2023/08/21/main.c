#include <stdio.h>
int main(){
  // Define Variables
  float a,b, sum=0, sub=0,mul=0,div=0;
  printf("Enter 2 Numbers: \n");
  // Input Read
  scanf("%f%f", &a,&b);
  // Store Values in Variables: SUM,SUB,MUL,DIV
  sum=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  // To Print all the Values
  printf("Sum of Num: %f", sum);
  printf("\nSubtration of Num: %f", sub);
  printf("\nMultiplication of Num: %f", mul);
  printf("\nDiv of Num: %f", div);   
  return 0;
}
// Type Casting (float)b 
