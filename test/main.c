#include <stdio.h>
#include <stdlib.h>

int main()
{ int r ,c ,i ,j ;
printf("ghhhhhsd");
scanf("%d" ,&r);
scanf("%d" ,&c);

for(i=0;i< r;++i)
 {
      if(i==0 || i==(r-1)){
         for(j=0;j<c;++j){
            printf("*");
         }

         }

         else   {
     for(j=0;j<c;++j){
        if(j==0 || j==(c-1)){
            printf("*");
        }

        else{
            printf(" ");
        }
     }

     }
      printf("\n");
 }





    return 0;
}
