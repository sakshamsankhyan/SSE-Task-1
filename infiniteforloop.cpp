#include <iostream>
using namespace std; 

int main() {
    for (int i = 0; 1<2; i++) {
 cout << i << endl;
    }
    return 0;
    // this will give us infinite loop because the condition 1<2 is always true. 
    //we need to stop the terminal forcefully by pressing ctrl+c otherwise entire system will hang.
     }