#include <bits/stdc++.h>
using namespace std;




   class b {

private:
    int a;

public:
   b( ) {
    a= 90 ;

   }
   friend class  car ;
   friend void showfunc( b&) ;
   };

   void showfunc( b &x){

  cout << "bjhj" << x.a <<endl  ;
 }

class car{
  public:

  int  id ;

  private:
  string color = "ghghh";
    int no;

   public:

  car(){
     no = 435 ;
  }

  car( int n ){
     no =  n  ;
  }


  void show_no(){
   cout << no << endl ;
  }
  void caree() ;
  void dis(  ){

      //string  b =  car.color ;
  cout <<"travelled"<<  endl;
  }

   void showb( b &b1){

   cout << b1.a << endl ;
  }

  };

   void  car :: caree(){
    string b = color ;
    cout << "hehe " << endl ;
   }



int main(){

   car c1;
   car c2( 467) ;

   c1.show_no();
   c2.show_no();

   string ccc= "bb" ;
 //  c1.color = "hghg" ;
   c1.id = 542 ;

   c1.dis( ) ;

   c1.caree();

    cout << ccc<< endl ;

    b b1;

    c1.showb(b1) ;
    showfunc(b1) ;

 return 0 ;
}


