#include <iostream>

using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

void swap(int *x, int *y)
{
    int temp; // temporary int variable to swap values at the x and y addresses
    // Print inside function
    cout << "Inside swap function..." << endl;
    cout << "Parameters: " << endl;
    cout << "x: " << *x << endl; // dereference x to get the value of x
    cout << "y: " << *y <<endl; // dereference y to get the value of y
    // assign address of x to temp
    //temp = x; 
    temp = *x;

    cout << "temp with no value: " << temp << endl; // print temp, we see that temp holds the value of x
    *x = *y; // set value of at memory address x to value of memory address y
    *y = temp;
}

int main()
{
    struct Rectangle r = {10, 3};

    cout << "Rectangle Length: " << &r.length << endl;
    cout << "Rectangle Breadth: " << &r.breadth << endl;
    swap(&r.length, &r.breadth);
    cout << "Rectangle Length: " << r.length << endl;
    cout << "Rectangle Breadth: " << r.breadth << endl;
}