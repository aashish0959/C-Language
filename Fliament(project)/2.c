
#include <stdio.h>

int main() {
   char val[]="AAshish";
   for(int i=0;val[i]!=NULL;i++){
      if(val[i]>='A' && val[i]<='Z'){
          val[i]+=32;
      }
      else if
      (val[i]>='a' && val[i]<='z'){
          val[i]-=32;
      } 
      printf("%c",val[i]);
      
   }
    

    return 0;
}

// user get string 

// #include<stdio.h>
// main(){
//     char name[100];
//     printf("Enter Any String:- ");
//     scanf("%s",name);
//     for (int i = 0; name[i] !='\0'; i++)
//     {
//         if (name[i] >='A'&& name[i] <='Z')
//         {
//             name[i]+=32;
//         }
//         else if (name[i] >='a'&& name[i] <='z')
//         {
//             name[i]-=32;
//         }
//     }
//     printf("%s",name);
// }