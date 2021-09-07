#include <iostream>

using namespace std;

int main()
{
  //  int *p=NULL;

  //  p=new(nothrow) int;
  //if(!p)
 /* {

      cout << "allocation of memory failed \n" ;

  }
    else
    {
        *p=29 ;
      cout << "value of p: "  <<*p <<endl;
        } */

       /* float *r=NULL;

        r=new(nothrow) float;
        if(!r){
            cout<< "allocation of memory failed\n" ;
        }
        else{
                *r=35.76;
            cout<<" value of r: " << *r << endl;
        }*/
        int n=7;
       int *q=new(nothrow) int[n];

       if(!q){
        cout <<" allocation failed\n";
       }

       else{
          for(int i=0;i<7;i++)
            q[i]=i+1;

            cout << "value stored in memory: ";
          for ( int i=0;i<7;i++)
            cout << q[i]<< " ";


       }
   delete p;
   delete r;
   delete  q;



    return 0;
}
