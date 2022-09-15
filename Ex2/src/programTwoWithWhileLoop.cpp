#include <iostream>
using namespace std;

int main() {
    //prompt user for two integers
    cout << "Enter two integers ";
    int one = 0, two = 0;
    cin >> one >> two;
    int i = one;
    while(i<=two){
        cout << i << "\n";
        i++;
    }
    return 0;
}
