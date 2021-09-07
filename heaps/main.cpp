#include <iostream>

using namespace std;

// min heap

void swap_( int *x , int*y ){

  int temp = *x ;
  *x = *y ;
  *y = temp ;

  return;

}



class minHeap{


  int*  parr ;

  int capacity;

  int heap_size ;


public:

     void insertKey( int k );
     void deleteKey( int i );
     void decreaseKey( int i , int new_val);

    int parent( int i ){

    return  (i-1)/2 ;
    }

    int left(int i ){

    return 2*i + 1 ;
    }


    int right(int i ){

    return 2*i + 2;
    }

    int extractMin();

    void  minHeapify();

};

// constructor
 minHeap::meanHeap(int cap ){

     heap_size = 0 ;
     capacity = cap ;

     parr = new int[cap];

 }



void minHeap::insertKey(int k ){

 if( heap_size == capacity ){

    cout <<"out of bound" << endl;
    return;
 }

 heap_size++ ;
 int i = heap_size -1 ;
 parr[i] = k ;


 // Fix the min heap property if it is violated

 while( i != 0 && parr[parent(i)] > parr[i]){

    swap_( &parr[i] , &parr[parent(i)]);

   i =  parent(i);
 }
}


void minHeap::deleteKey( int i){

  decreaseKey(i , INT_MIN);
  extractMin();
}


void minHeap::decreaseKey( int i , int new_val  ){






}

void minHeap::minHeapify( int i ){

     int l=left(i);
     int r= right(j);

     smallest = i ;

     if( l < heap_size &&  parr[l] < parr[i] ){

         smallest = l ;

     }


     if( r < heap_size && parr[r] < parr[i] ){

        smallest = r ;
     }


 if(  smallest != i ){


      swap_(&parr[i] , &parr[smallest]);
      minHeapify(smallest);


 }


}

// Method to remove minimum element (or root) from min heap
  void minHeap::extractMin(){


   if( heap_size <= 0 ){
    return INT_MAX ;
   }

  if( heap_size == 1 ){

     heap_size--;
    return harr[0];


  }

  int root = parr[0];
  parr[0] = parr[ heap_size - 1];
  heap_size--;
  minHeapify();

  return root;


  }



class maxheap{


   int heap_size ;
   int capacity ;

   int* parr ;

   int parent( int i ){
   return  (i-1)/2 ;
   }

   int left( int i ){
    return 2*i +1 ;

   }

   int right( int i ){
    return 2*i +2 ;
   }

   int extractmax();

   void maxheapify( );


};

 maxheap::maxheap(int cap){

  heap_size = 0 ;
  capacity =  cap ;

  parr = new int[cap];

 }
int maxheap::extractmax(){

  if(heap_size <= 0){

    return INT_MIN ;

  }
  if( heap_size == 1  ){

    heap_size--;
    return parr[0];
  }


   int root = parr[0];
   parr[0] = parr[max_heap -1 ];
   heap_size--;
   maxheapify(0);
   return root ;

}


void maxheap::maxheapify(){

   int l = left(i);
   int r = right(i);


    biggest = i ;

    if( l < heap_size && parr[l]  > harr[i]){

        biggest = l ;

    }

    if( r  < heap_size &&  parr[r]  > harr[i]){

        biggest = r ;



    }

    if( biggest != i ){

        swap_( &parr[i] , &parr[biggest]);
        maxheapify(biggest);



    }




}
int main()
{




    return 0;
}
