#include <iostream>

using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    struct Rectangle r = {10, 3};

    cout << "Rectangle Length: " << &r.length << endl;
    cout << "Rectangle Breadth: " << &r.breadth << endl;
    swap(r.length, r.breadth);
    cout << "Rectangle Length: " << r.length << endl;
    cout << "Rectangle Breadth: " << r.breadth << endl;
}