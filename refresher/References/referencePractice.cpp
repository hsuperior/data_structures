#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int a = 10;
    // a reference is an alias to a variable
    int &r = a; //& is reference, * is pointer


    cout << "a: " << a << endl;
    cout << "r: " << r << endl;

    r++;

    cout << "a: " << a << endl;
    cout << "r: " << r << endl;
}