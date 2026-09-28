#include <iostream>
using namespace std; 
//creating a multiplication table using nested for loops
int main() {
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            cout << i*j << "\t";
        }
        cout << endl;
    }
     
    return 0;
}