#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length; // 2 bytes
    int breadth; // 2 bytes
};

int main()
{
    struct Rectangle r={10,5}; // occupies memory, declaration + initialization
    // EVERY pointer, no matter what type takes 2 bytes
    struct Rectangle *p = &r; //a Rectangle pointer, 2 bytes
    struct Rectangle *heapPointer; // <--- in the stack

    //p is the address of the Rectangle structure;

    int rectangleLength = (*p).length;
    // OR
    int rectangleBreadth = p->breadth;
    
    //int newLength = p.length;
    cout << "Length via Pointer: " << rectangleLength << endl;
    cout << "Length via Pointer: " << rectangleBreadth << endl;

    cout << "Pointer: " << p << endl;


    // Send rectangle data to HEAP
    heapPointer=(struct Rectangle *)malloc(sizeof(struct Rectangle)); //type cast to Rectangle type because malloc returns VOID POINTER

    heapPointer->length = 20;
    heapPointer->breadth = 5;


    
}