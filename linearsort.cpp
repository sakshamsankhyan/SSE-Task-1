#include <iostream>
using namespace std;
int linerarSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,1000,10,20,8};
    cout<<linerarSearch(arr,7,69);
    
}