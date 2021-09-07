#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{

/*
    map<int ,int>mp;
    mp.insert({ 5  , 16 });
    mp.insert({ 1 , 18 });
    mp.insert({ 2 , 17 });
    mp.insert({ 3  , 19 });



   set<int > s1;
   s1.insert(1);
   s1.insert(2);
   s1.insert(3);
   s1.insert(5);


   for(auto it : s1 ){

         cout << mp[it] << endl;

  }
  //cout << mp[5] << endl;

*/




  string mp = "rimihjgjgjgjgj" ;
 cout << mp.substr(0 , 1 ) <<endl;

  for( int i=1; i <= 14 ; i++){

    string mm = mp.substr(0 , i);
    cout << mm << endl;

  }

    return 0;
}
