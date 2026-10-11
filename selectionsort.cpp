#include <iostream>
using namespace std; 

int main() {
     int arr[]={4,3,2,6,1,5};
    size_t n =( sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<n-1;i++){
      int x=i;
      for(int j=i+1; j<n;j++){
        if(arr[j]<arr[x]){
            x=j;
        }
          
      }
      swap(arr[i], arr[x]);
    }
          
        
       
        for (int d = 0; d< n; d++) {
        cout << arr[d] << " ";}

    return 0;
}