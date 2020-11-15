#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main()
{
    struct Rectangle r = {10, 3};

    int a, b;
    a=10;
    b=20;
    swap(a,b);

    cout << "a: " << a <<endl;
    cout << "b: " << b <<endl;



    return 0;
}