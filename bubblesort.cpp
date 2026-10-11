#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={4,3,2,6,1,5};
    size_t n =( sizeof(arr)/sizeof(arr[0]));
    
     for(int i=0;i<n-1;i++){
        for(int j=0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        
        }
     }
     for (int d = 0; d< n; d++) {
        cout << arr[d] << " ";
    }
    return 0;
}