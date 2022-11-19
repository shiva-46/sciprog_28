#include<stdio.h>
#include<math.h>

int main(void){

 int N=12, i;
 float a=0.0, b_deg=60.0;
 float b_rad, area, mult_rad;

 // Convert b_deg=pi/3 to radians
   b_rad=(M_PI*b_deg)/180.0;
   printf("pi/3 in Radians = %f\n", b_rad);

  // Sum tan(a)+tan(b)
  
  sum=tan(a)+tan(b_rad);
  
  for(i=5;i<60;i=i+5){
  sum=sum+2*tan((M_PI*i)/180.0);
  }
   
  mult_rad=(M_PI*((b_deg)/(2*N)))/180.0;
  area=mult_rad*sum;

  printf("Approximated=%f, Exact=%f\n", area, log(2.0));

  return 0;

}
  
  
  
