#include <iostream>

using namespace std;

struct Rectangle {
    int length; // 2 bytes
    int breadth; // 2 bytes
}; // doesn't consume memory because it's only a definition

int main() {

    struct Rectangle r; // This will take up 4 bytes of memory
    struct Rectangle r2={10,5}; // declaraction and initialization. inside the main memory
    r2.length=12;
    r2.breadth=3;
    printf("The area of the rectangle is %d\n", r2.length * r2.breadth);

    return 0;
}