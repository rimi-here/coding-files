#include <iostream>

using namespace std;
/*

void fv(int()){
}

void fv(int (*)()){}

/*
class t{

 static void fu(int i ){
}
void fu(int i ){

}

};



void f( int *p){
  cout <<p << endl;
}

void f( int p[]){
  cout << done<< endl;
}


int main()
{  int x = 5 ;

    getchar() ;
   return 0 ;


}
*/

/*
void fun(int &i)
{
    cout << "fun(int &) called " ;
}

void fun(const int &i)
{

     i =19 ;
    cout << "fun(const int &) called " << i <<endl;
}

int main()
{
     const int i = 10;
    fun(i);
    return 0;
}

*/

//function overriding



class base_class{

    public:
       virtual void display(){

      cout << "dis of base class" <<endl ;
  }
   void show(){
    cout << "show of base class "<<endl ;

   }


};

class dr_class : public base_class{
public:


   void display(){

      cout << "dis of derived class" <<endl ;
  }
   };

int main(){

  dr_class dr;
  base_class bs;



  dr.display();
  bs.show();


return 0 ;
}
