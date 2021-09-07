#include <stdio.h>
#include <conio.h>

int main()
{
 /* 1.
   int n,k,i;

   printf("enter the vallue of n: ");
   scanf("%d",&n);

   for(k=n;k<=1;k--){

    for(i=n;i>=k-1;i--){
        printf(" ");
        }

    for(i=1;i<=k;i++)
        {
        printf("* ");

        }
        printf("\n");
    }*/


    /*2.


    int n,k,i;

   printf("enter the vallue of n: ");
   scanf("%d",&n);

   for(k=n;k>=1;k--){

    for(i=1;i<=k;i++){
        printf("* ");
        }
       printf("\n");
   }*/

   /*3.
    int n,k,i;

   printf("enter the vallue of n: ");
   scanf("%d",&n);

   for(k=1;k<=n;k++){

     for(i=k;i<=n;i++){
        printf("  ");
        }
     for(i=1;i<=(k+k)-1;i++)
        {
        printf("* ");
        }
        printf("\n");

    }*/

 /* 4.  int i,j,k;

     for(i=1;i<=5;i++){
        k=i;
          for(j=1;j<=9;j++) {

           if(j>=6-i && j<=4+i){

            printf("%d",k);
            j<5?k++:k--;
           }
            else{
                printf(" ");
            }
          }
      printf("\n");
}*/
   /* 5. int n,k,i;

   printf("enter the vallue of n: ");
   scanf("%d",&n);

   for(k=n;k>=1;k--){

     for(i=k;i<=n;i++){
        printf("  ");
        }
     for(i=1;i<=(k+k)-1;i++)
        {
        printf("* ");
        }
        printf("\n");
   }*/

  /*6. int n,k,i,r=1;

   printf("enter the value of n");
   scanf("%d",&n);


   for(k=1;k<=n;k++){
    for(i=1;i<=k;i++){
        printf("%d ",r);
        r++;
    }
    printf("\n");
   }*/

  /* 7.int n,k,i,r;

   printf("enter the value of n");
   scanf("%d",&n);


   for(k=1;k<=n;k++){

    for(i=1;i<=k;i++){
        r=i%2;
        printf("%d ",r);
        r++;
    }
    printf("\n");
   }*/

  /*8.int i,j,k;
    for(i=1;i<=4;i++){
          k=1;
          for(j=1;j<=8;j++){


            if(j<=5-i || j>=4+i){


                printf("%d",k);
                  if(j<4){
                    k++;
                  }
                  if(j>=5){
                    k--;
                  }

                }
            else{
                printf("*");
                if(j==5){
                    k--;
                }
                }

          }
       printf("\n");
    }*/


return 0;
}
