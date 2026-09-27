#include <iostream>
using namespace std;
int main(){

    for (int i = 0; i < 10; i++){

        cout << i << endl;

        if(i>5){
            break;
        }

    }
    

    for (int i = 0; i < 10; i++){

        if(i>5){
            break;
        }
        cout << i << endl;

       

    }
   ///first one prints upto 6 and second one prints upto 5.
    /// noticed the difference in the output of the two loops above. In the first loop, the value of i is printed before the break statement is executed, while in the second loop, the break statement is executed before the value of i is printed. This results in different outputs for the two loops. 
   ///didnt know vs code also completed sentences like these.
   
   
    return 0;
}