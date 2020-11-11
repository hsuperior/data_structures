#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {


    int s;
    int *p; // declared, it's inside the stack
    int *cppStyleArray;
    // malloc returns null pointer, cast it to a int pointer
    // asing for memory to be allocated for 5 integers
    // using p, we can access the entire array
    // This is C lang how to make an array
    p = (int *)malloc(5 * sizeof(int)); 
    
    // C++
    cppStyleArray = new int[5];

    s = 2;
    //printf("%lu\n", sizeof(s));

    cout << "Integer Byte: " << sizeof(s) << endl;
    
    if (p==NULL) {
        exit(1);
    }
    else{
        cout << "Memory Address: " << p << endl;
    }

    cout << "C++ style: " << cppStyleArray << endl;

    free(p);
    free(cppStyleArray);
}