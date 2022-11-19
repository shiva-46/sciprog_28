#include<stdio.h>
#include<math.h>

double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main(){
  
  double delta,x;

  printf("Enter precision for Maclaurin series\n");
  scanf("%lf", &delta);

  int length=1000;
  double tanone[length];
  double tantwo[length];

  int j=0; 
  x = -0.9;
  
  while(x<=0.9 && j<=length){
  tanone[j]=arctanh1(x,delta);
  tantwo[j]=arctanh2(x);
  printf("The difference at x=%lf between them is %.10lf\n", x,fabs(tanone[j]-tantwo[j]));
  j++;
  x=x+0.01;
  }
return 0;

}


double arctanh1(const double x, const double delta){

 double arcTan = 0; 
 double ele, value;
 int n=0;
 do{
  value=2*n+1;
  ele=pow(x,value)/value;
  arcTan+=ele;
  n++;
 }while(fabs(ele)>=delta);

return arcTan;
}

double arctanh2(const double x){
  return(log(1+x)-log(1-x)/2);
}
