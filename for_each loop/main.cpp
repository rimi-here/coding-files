#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;



  //void printx2 (int a){
  //  cout<< a*2 << " ";
  //  if( a  %2 == 0){
      //  throw a;
  //  }
  //}
   // struct class1{
//
       //  void operator() (int a){
         ////   cout << a*3 << " ";
         //   if( a % 2 == 0){
               // throw a;
            //}
        //    }
      //  }obj;
    // if the function throws an exception, for_each loop will also throw an exception and break/terminate the loop.

     void printx2 (int a){
       cout<< a*2 << " ";
     }

     struct class1{
//
         void operator() (int a){
          cout << a*3 << " ";
         }
     }obj;

     int main(){

   //  int a[5]={1,5,2,4,6};
    // cout<<" using array" <<' ';
//
  //  try{
       // for_each(a,a+5,printx2);
     // }
    // catch(int i){
    //     cout<< "\n the exception element is: " << i;

  //   }
  //   cout<< endl;

     vector<int> arr1={1,3,6,5,1};

    // try{
   //      for_each(arr1.begin(),arr1.end(),printx2);

    // }
   //  catch(int i){
      //   cout<< "\n the exception is"<< i;

    // }
    // cout << endl;
     // try{
       //  for_each(arr1.begin(),arr1.end(),obj);

    // }
    // catch(int i){
       //  cout<< "\n the exception is"<< i;

    // }
     //cout<< endl;

     cout << "using array" << " ";
     for_each(arr1.begin(),arr1.end(),printx2);
     cout <<endl;

     cout << "using array" <<" " ;
     for_each(arr1.begin(),arr1.end(),obj);
     cout <<endl;


    return 0;
     }


