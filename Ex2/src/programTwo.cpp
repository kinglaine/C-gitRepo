#include <iostream>
using namespace std;
int main() {
    //prompt user for integers
    cout << "Enter two integers ";
    int one = 0, two = 0;
    cin >> one >> two;
    for(int i = one; i <= two; i++){
        cout << i << "\n";
    }
    return 0;
}
