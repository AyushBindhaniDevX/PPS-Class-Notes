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
----------------------------------------------------------
#include <stdio.h>
void main(){
char a[30];
  printf("Enter a:\n");
  scanf("%s", &a);
  printf("Your Name is : %s",a);  
}
----------------------------------------------------------
#include <stdio.h>
void main(){
  char a[30];
  printf("Enter a:\n");
  fgets(a,sizeof(a),stdin);
  printf("Your Name is :\n");  
  puts(a);
}
----------------------------------------------------------

#include <stdio.h>
// Odd or Even Number
int main(){
  int a;
  scanf("%d",&a);
    if (a%2==0){
    printf("Even");
      }
    else
      printf("Odd");  
  return 0;  
}
----------------------------------------------------------
#include <stdio.h>
// Ternary Operator
int main(){
  int a;
  printf("Enter Your Age:\n");
  scanf("%d",&a);
  (a>18)?(printf("Can Vote")):(printf("Cannot Vote"));
  return 0;  
}
----------------------------------------------------------
a=5
// Increatment or Decreament
++a / a++
--a / a--
----------------------------------------------------------

