#include <stdio.h>
#include <stdlib.h>
//int deter(int a[3][3], int k);

int main()
{


  /* int r1,c1,r2,c2,i,j,k,a[5][5],b[5][5],mul[5][5],sum;
   printf("enter the row of matrix a:");
   scanf("%d",&r1);
    printf("enter the col of matrix a:");
    scanf("%d",&c1);

     printf("enter the row of matrix b:");
   scanf("%d",&r2);
    printf("enter the col of matrix b:");
    scanf("%d",&c2);

    if(c1 == r2){
         printf("\n matrix multiplication possible.");
    }
    else{
       printf("\n matrix multiplication not possible.");
     exit(0);
    }


      printf("\n enter the first matrix:\n");
    for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
             scanf("%d",&a[i][j]);

        }
    }

    printf("enter the second matrix:\n");
    for(i=1;i<=r2;i++){
        for(j=1;j<=c2;j++){
             scanf("%d",&b[i][j]);

        }
    }

    printf("multiplication result:\n");
     for(i=1;i<=r1;i++){
        for(j=1;j<=c2;j++){
          sum=0;
          for(k=1;k<=c1;k++){
            sum+=a[i][k]*b[k][j];

          }
            printf("%d ",sum);
        }
        printf("\n");
    }

    return 0;*/

   /* int i,j,a[3][3],det,q;
    printf("enter the order of diterminant:");
    scanf("%d",&q);


    printf("enter the determinant of the order %d \n",q);

    for(i=0;i<=q-1;i++){
        for(j=0;j<=q-1;j++){
            scanf("%d",&a[i][j]);

        }
    }

    det=deter(a,q);
     printf("the result:%d",det);*/



    /* int a[3][3],i,j,flag=1;

     printf("enter the matrix:\n");

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
             scanf("%d",&a[i][j]);
             }
              }


                 for(i=0;i<3;i++){
              for(j=0;j<3;j++){


     if(i==j && a[i][j] !=1){
        flag=0;
        }

     else if(i != j && a[i][j] != 0){
        flag=0;
     }
              }
                 }

           if(flag==1){
            printf("the matrix is identity matrix.");
           }else{
              printf("the matrix is not identity matrix.");
           }*/



     /*      int i,j,r,c,a[5][5],count=0;

           printf("enter no of rows:");
           scanf("%d",&r);
           printf("enter no of col:");
           scanf("%d",&c);

           printf("enter the matrics");

            for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          scanf("%d",&a[i][j]);
            }
        }


        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j] == 0)
                count++;
        }
        }


        if(count >((r*c)/2)){
           printf("its a sparse matrix");
           }
           else{
            printf("its not a sparse matrix");
        }
*/


    return 0;
}



     /*int deter(int a[3][3], int k){

    int b[3][3],m,n,i,j,c,det,s=1;
    if(k==1){
      return (a[0][0]) ;
    }
    else{
          det=0;
           for(c=0;c<=k-1;c++){
            m=0,n=0;
         for(i=0;i<k;i++){
        for(j=0;j<k;j++){
        if(i!=0 && j!=c){
                b[i][j]=0;
            b[m][n]=a[i][j];
            if(n<(k-2)){
                n++;
            }
            else{
                n=0;
                m++;
            }
        }
        }
         }

        det=det+s*(a[0][c]*deter(b,k-1));

        s=-1*s;
    }
    }
    return (det);
     }   */
