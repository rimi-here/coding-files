#include <stdio.h>
#include<conio.h>
#include<math.h>

//int cube(int a);
 //float cal(float a);
 //int max(int p, int q);
   //void num_status(int a);

  //int isprime(int a);
       int sumoffact(int num);





int main()
{
   /* int i,ans;
    printf("enter a number:");
    scanf("%d",&i);

    cube(i);
     ans=cube(i);

     printf("cube of the number is: %d",ans);*/



      /* float i;
       float area;
       printf("enter the input:");
       scanf("%f",&i);

       area=cal(i);
       printf("area of the circle is:%f",area);*/


    /*   int a,b,max_num;
       printf("enter the value of 1st num:");
       scanf("%d",&a);

         printf("enter the value of 2nd num:");
          scanf("%d",&b);

          max_num=max(a,b);

          printf("maximum of two num is: %d",max_num);*/

  /*int num;
    printf("enter the value of  num:");
    scanf("%d",&num);
    num_status(num);*/


 /* int num;
    printf("enter the value of  num:");
    scanf("%d",&num);
    armstrng(num);*/

   /*try:
    int i=3;
    int e;
    e=(i%10);
  printf("%d",e);*/


   /* int p,r,i,flag;
  printf("enter the start of interval:");
  scanf("%d",&p);x
  printf("enter the end of interval:");
  scanf("%d",&r);
   for(i=p;i<=r;i++){
       flag=isprime(i);

       if (flag == 1){
        printf("%d ",i);

       }

   }*/


   int a,n,sumofseries=0;

   printf("the summation of series");
   scanf("%d",&n);


    for(a=1;a<=n;a++){

     sumofseries+= sumoffact(a);




    }

  printf("the result:%d",sumofseries);

    return 0;
}
 /*int cube(a){
        int result;
        result=(a*a*a);
        return result;

      }*/

      /*float cal( float a){
      float pi=3.14;
       return (a*a*pi);


      }*/

   /*   int max(p,q){

      int maximum=0;
      (p>q) ?(maximum=p) :(maximum=q);
      return maximum;


      }*/

   /* void num_status(a){
         int i,flag=0;

         if(a<2){
            flag=0;
         }

          for(i=2;i<=sqrt(a);i++){
            while( a%i==0){
                flag=0;
                break;}

                }
      if(flag==0)
      {printf("the number is prime");}
    else
     {printf("the number is not prime");}

       }*/


       /*  void armstrng( int a){
          int c,sum=0,r;
           c=a;
         while(a>0){
                r=a%10;
               sum+=(r*r*r);
               a=a/10;

           }
         if(c==sum){
              printf("the number is a armstrong num.");
              }
         else{
              printf("the number is not a armstrong num.");
         }
 }*/

  /*  int isprime(int a){
       int j,flag=1;

            for(j=2;j<=a/2 ;j++){

               if(a%j==0){
                flag=0;
                break;
               }

              }
              return flag;
    }*/

    int sumoffact(int num){

      int i,result,fact=1;
      for(i=1;i<=num;i++){
        fact *=i;


      }

      result=fact/num;
      return result;


    }

