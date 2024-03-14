#include<stdio.h>
void main(){

float u,bill,s=0;

printf("enter the number :-");
scanf("%f",&u);

if(u>0 && u<50){
    bill = u * 0.50;
    printf(" %d",bill * 0.20);
}
else if(u>51 && u <150){
    bill = u * 0.75;
    printf("%d",bill * 0.20);
}
else if(u>151 && u <250){
    bill = u * 1.20;
    printf("%d",bill * 0.20);
}
else{
    bill = u * 1.50;
    printf("%d",bill * 0.20);

}



}