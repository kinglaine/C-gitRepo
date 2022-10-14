#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int sum = 0;
    int digit = 0;
    cout << "Enter a positive number: ";
    cin >> num;
    while(num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout << "Sum of digits of the number" << num << " is: " << sum;
    return 0;
}