
#include <stdio.h>

int rec (int a,int b){
    int  area;
    
    printf("enter the value of rec height :");
    scanf("%d",&a);
     printf("enter the value of rec width :");
    scanf("%d",&b);
    
    
    
  if(a>0 && b>0){
      printf("rec height %d\n",a);
      printf("rec width %d \n",b);
      area=a*b;
  }
  else{
      printf("invalid");
  }
  return(area);
}


int main() {
    int h,w;
    printf("area of rectangle %d",rec(h,w));

    return 0;
}