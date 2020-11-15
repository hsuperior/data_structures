#include <iostream>

class Rectangle
{
    // Set properties of the Rectangle class
private:
    int length;
    int breadth;

public:
    // Constructor that does not take parameters
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    // Constructor Overload - This one will take parameters
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // Function to get area
    int area()
    {
        return length * breadth;
    }
    // Function to get perimeter
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    // Getter Function - get Length
    int getLength()
    {
        return length;
    }
    // Getter Function - get Breadth
    int getBreadth()
    {
        return breadth;
    }
    // Setter Function - set Length
    void setLength(int newLength)
    {
        length = newLength;
    }
    // Setter Function - set Breadth
    void setBreadth(int newBreadth)
    {
        breadth = newBreadth;
    }

    // Destructor to free up memory if necessary
    ~Rectangle()
    {
        std::cout << "Destroy this rectangle" << std::endl;
    }
};

int main()
{
    // Rectangle with no parameters
    Rectangle r1;
    // Rectangle initialize with parameters
    Rectangle r2(100, 20);

    std::cout << "Area of r1: " << r1.area() << std::endl;
    std::cout << "Area of r2: " << r2.area() << std::endl;
    std::cout << "Perimeter of r1: " << r1.area() << std::endl;
    std::cout << "Perimeter of r2: " << r2.perimeter() << std::endl;

    return 0;
}