#include<stdio.h>
#include<math.h>

float tan_arr[13];

float deg_to_rad(float theta)
 {
   return M_PI * theta/180;
 }

float trap_rule(int N)
 {
  float a = deg_to_rad(0);
  float b = deg_to_rad(60);

  float sum=tan_arr[0] + tan_arr[N-1];
  int i=0; 
  for(i=1;i<N-1;i++)
   {
     sum+= 2*tan_arr[i];
   }
   return (b-a)* (sum)/(2*(N-1));
 }

 int main(void)
{
  int N=13;
  float start=0;
  float end = 60; 
  float step_size = (end-start)/(N-1);  
  int i=0;

  for(i=0;i<=12; i++)
  {
   tan_arr[i]= tan(deg_to_rad(step_size * i));
   printf("tan[%d]=%f\n", (i),tan_arr[i]);
  }
  float ans = trap_rule(13);
  printf("The answer is %f\n", ans);
  printf("The actual value is %f\n", logf(2));
  return 0;

}
