#include <iostream>
#include <vector>
#include<iterator>
using namespace std;
int main (){
    vector<int> r = {1, 2, 4, 6, 8, 12, 34, 56, 90, 61};
    vector<int>::iterator ptr;
    for (ptr = arr.begin(); ptr < r.end(); ptr++)
        cout << *ptr << " ";


    return 0;
}