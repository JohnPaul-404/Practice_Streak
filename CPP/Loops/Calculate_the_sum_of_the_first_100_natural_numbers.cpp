#include <iostream>
using namespace std;
int main(){
    //using a variable called sum to store the sum of numbers, initializing it with 0 first.
    int sum = 0;
    for(int i=1; i<=100; i++){
        sum = sum + i;
    }
    cout << "Sum = " << sum;
    return 0;
}