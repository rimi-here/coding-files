#include <bits/stdc++.h>
using namespace std;


/*



//adjacency matrix
  int arr[ 10][10] ;


  void disp( int v  ){

    for( int i= 0 ; i <v ; i++){
    for( int j= 0 ; j <v ; j++){
        cout << arr[i][j] ;
    }
    cout << "\n" ;
   }

  }

void add_edge( int u , int v ){

    arr[u][v] = 1 ;
    arr [v][u] = 1;
}
int main() {
  int  v ;
   cout << "no of vertices" << endl ;
       cin >> v ;

       add_edge ( 0 ,  4) ;
        add_edge ( 0 ,  1) ;
       add_edge ( 1 ,  2) ;
       add_edge ( 1 ,  3) ;
        add_edge ( 1,  4) ;
        add_edge (2,  3);
        add_edge (3 ,  4);
       disp( v ) ;
*/




  void  findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size() ;
      int  l = 0 ; int r = n - k ;

          while(l < r ){

              int mid =( l+r) /2 ;

              if( arr[mid] == arr[mid+k ])
              { if (arr[mid] < x ) l = mid+1 ;
                  else r= mid  ;

                  cout <<" l " << l << " r" << r << endl ;

              }
              else if(abs( x - arr[mid]) <= abs(arr[mid+k] - x ) ) r= mid ;
              else l = mid +1 ;
                cout <<" l " << l << " r" << r << endl ;
          }

          return ;
      }


// BFS


int main(){




vector<int>arr{ 12 ,16 , 22 , 30 , 35 , 39 , 42 , 45 , 48 , 50  , 53 , 55 , 56 };


int k = 4  , x= 68 ;
//int r = lower_bound( begin(a) , end(a)-k , x ) - begin(a);
 findClosestElements( arr,  k ,  35) ;
//cout << r << endl;

return 0 ;
}
