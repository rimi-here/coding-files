#include <stdio.h>
#include <conio.h>

  // int power(int base,int pow);
  //int sum(int a);
  //  int evenoddsum(int start , int a);

  // int reverse(int a);
   //int fact(int a);

   int fibo(int n );
 // int gcd(int a,int b);
  //int lcm(int a,int b);


int main()
{
  /* int a,b,result;   /*int fibo(int n );

   printf("enter the num");
       scanf("%d",&a);
       printf("enter the power");
       scanf("%d",&b);
   result=power(a,b);
   printf("the result: %d",result);*/


    /*  int n,result;
      printf("enter the number:");
      scanf("%d",&n);

      result=sum(n);
      printf("enter the result:%d",result);*/

    /*  int n,t,result1;
      printf("enter the end:");
      scanf("%d",&n);
      printf("enter the start:");
      scanf("%d",&t);

      result1=evenoddsum(t,n);
      printf("the result:%d\n",result1);*/

     /* int n,result;
      printf("enter the num:");
      scanf("%d",&n);

      result=reverse(n);

      if(result==n){
        printf("palindrome");
      }
      else{
          printf(" not palindrome");}*/

   //   printf("enter the result:%d",result);

   /*  int n,result;
       printf("enter the num: ");
       scanf("%d",&n);

       result=fact(n);
       printf("the factorial is:%d",result);*/

  int n,i,result;
    printf("fibonacci series upto n:");
       scanf("%d",&n);


  for(i=0;i<n;i++){
       result=fibo(i);
       printf("%d \n",result);
    }
  /* int p,r,result;
    printf("gcd of two numbers:");
    scanf("%d %d",&p,&r);

    result=gcd(p,r);
    printf("the gcd of two numbers:%d",result);*/

  /* int p,r,result;
    printf("enter the two numbers:");
    scanf("%d%d",&p,&r);

    if(p>r){
        result=lcm(r,p);
    }
    else{

    result=lcm(p,r);
    }
  printf("the lcm is:%d",result);*/

    return 0;
}

  /*int power(int base,int pow){

         if(pow != 0 ) {
         return (base*power(base,pow-1));
         }
          else{

            return 1;
          }
    }*/
     /*   int sum(int a){

      if(a != 0){

         return (a+sum(a-1));
      }
      else{
        return 0;

      }
        }*/

     /* int evenoddsum(int start, int a){

            if(start>a){
            return 0;
        }
             else{
                return(start+evenoddsum(start+2 ,a));
             }

      }*/
    /* int k=0,r;
      int reverse(int a){

      if(a>0){

        r=a%10;

        k=(k*10+r);
       return (reverse(a/10));
      }
      else{
       return k;
      }
  return k;
      }*/
       /*int fact(int a){


              if(a==1 || a==0){
                 return 1;
              }
              else{

              return (a* fact(a-1));

              }
              }*/

     int fibo(int n ){

          if(n==0){
              return 0;
             }
          else if(n==1) {
                return 1;
                }
           else{
            return (fibo(n-1)+fibo(n-2));

           }
     }

   /*  int gcd(int a,int b){


     while(a!=b){
     if(a>b){
        a=a-b;
        gcd(a,b);

     }
     else{
        b=b-a;
        gcd(a,b);
     }
     }
     return a;

     }/*
   /* int lcm(int a,int b){

         static int m=0;

         m+=b;
         if(m%a==0 && m%b==0 ){
           return m;
         }
         else{
         return lcm(a,b);
         }

     }*/





