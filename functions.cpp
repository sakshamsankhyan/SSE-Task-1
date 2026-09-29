#include <iostream>
using namespace std;     
// creating a function to add all number up until given number n 
int sum(int x) {
    int y = 0;
    for (int i = 0; i <= x; i++) {
      y += i; 
      //ide helped here i didnt know what += operator does 
    
    }
    return y;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The sum of all numbers up to " << n << " is: " << sum(n) << endl;
    return 0;
}