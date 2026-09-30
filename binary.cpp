#include <iostream>
using namespace std;
int binary(int arr[],int size,int key){
    int start=0,end=size-1;
    int k=1;
    while(start<=end){
        int mid= start+(end-start)/2;

        if(arr[mid]==key){
            cout<<k<<endl;
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;

        }
         k++;

    }
    cout<<k<<endl;
    return -1;
    
    
}

int main(){
    int arr[]={1,2,3,5,10,100};
    cout<<binary(arr,6,3);
    
}