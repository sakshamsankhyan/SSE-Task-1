#include <iostream>
using namespace std; 

int main() {int arr[]={4,3,2,6,1,5};
    size_t n =( sizeof(arr)/sizeof(arr[0]));
    for(int i=1;i<n;i++){
      int curr=arr[i];
      int prev=i-1;
      while(prev>=0 && arr[prev]>curr){
        arr[prev +1]=arr[prev];
        prev--;
   
      }
     arr [prev+1]= curr;

    }

  for (int d = 0; d< n; d++) {
        cout << arr[d] << " ";}

     
    return 0;
}