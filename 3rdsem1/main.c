#include <stdio.h>
#include <conio.h>

int main(){


    /* 1.  int i;
int big=0
;
  int numbers[10];
  printf("enter the array elements");
  for(i=0;i<10;i++){
    scanf("%d",&numbers[i]);

  }
  for(i=0;i<10;i++){
    if(big<numbers[i]){

      big=numbers[i];

    }

  }
  printf("the biggest number is: %d",big);*/

   /*  int input[8];
     int i,avg,count=0;
     int sum=0;

      printf("enter the inputs");
      for(i=0;i<8;i++){
        scanf("%d",&input[i]);
      }


     for(i=0;i<8;i++){
        sum+=input[i];
        }
        avg=(sum/8);
     for(i=0;i<8;i++){
        if(input[i]>avg)
            count++;
     }
     printf("no of inputs:%d",count);*/


     int r1,c1,r2,c2,i,j,a[10][10],b[10][10],sum[10][10];
     printf("enter the row of matrix a:");
         scanf("%d",&r1);
       printf("enter the col of matrix a:");
         scanf("%d",&c1);


      printf("enter the row of matrix b:");
         scanf("%d",&r2);
         printf("enter the col of matrix b:");
         scanf("%d",&c2);


     if(r1==r2 && c1==c2)
        printf("\n addition possible.");
     else
     {

      printf("addition not possible.");
         exit(0);
         }

     printf("\n enter the a matrix \n");
     for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
        printf("elements of a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
     }

     }
     printf("enter the b matrix \n");
          for(i=1;i<=r2;i++){
        for(j=1;j<=c2;j++){
          printf("the elements of b[%d][%d]: ",i,j);
           scanf("%d",&b[i][j]);
     }

     }

             for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
        sum[i][j]=a[i][j]+b[i][j];

     }

     }
      printf("\n enter the sum: \n");
         for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
            printf("%d  ",sum[i][j]);

        }
            printf("\n\n");


         }


    //transpose

     /*   int  i,j,a[5][5],b[5][5],r,c;

         printf("enter the row:");
         scanf("%d",&r);


         printf("enter the col:");
         scanf("%d",&c);


       printf("enter the matrix:");
         for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
        scanf("%d",&a[i][j]);
        }
         }



         for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
                b[i][j]=a[j][i];
        }
        }

            printf("transpose of the matrix:\n");
                 for(i=1;i<=r;i++){
               for(j=1;j<=c;j++){
                printf("%d  ",b[i][j]);

               }
               printf("\n");
            }
             */


    return 0;
}
