 
 
#include <iostream>
using namespace std;


int main() {
    int array[]= {5,7,3,7,1};                 //n=5
    int temp;
    for ( int i=0; i<5; i++) {
        for(int j=0; j<5-i;j++) {
            if ( array[j] > array[j+1]) {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
        }
        
      }
    }
    for (int i=0; i<5; i++) {
            cout<< array[i]<<" ";
        }
        
    }


