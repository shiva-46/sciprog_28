#include<stdio.h>
#include<stdlib.h>

void fibonacci(int *a, int *b);

int main()
{

  int n,i;
  int num0=0;
  int num1=1;

  printf("Enter a positive interger n : \n");
  scanf("%d", &n);
  
  if(n<1){
   printf("The number is not positive\n");
   exit(1);
   }

  printf("Fibinacci sequence is : \n");
  printf("%d, %d, ", num0,num1);
  
  for(i=2;i<=n; i++){
   fibonacci(&num0,&num1);
   printf("%d, ", num1);

   if(i%10==0){
    printf("\n");
   }
 }
  return 0;
}


void fibonacci(int *a, int *b){
    int next;
   
    next=*a+*b;
  
    *a=*b;
    *b=next;
      
}

