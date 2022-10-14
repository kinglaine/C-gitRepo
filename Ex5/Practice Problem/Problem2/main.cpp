#include <iostream>
using namespace std;
bool prime(int n){
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main (){
    for (int i = 3; i<=100; i++){
        if (prime(i) == true){
            cout << i << ", ";
        }
    }
    return 0;
}