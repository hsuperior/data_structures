#include <iostream>

using namespace std;

int main(){


    int a = 10; // data variable
    int *p; // address memory. points to address where data is stored
    p=&a; // will also occupy memory. takes 2 bytes because it's an int pointer
    printf("%d\n", a);
    cout << "Pointer: ";
    cout << *p << endl;
    return 0;
}