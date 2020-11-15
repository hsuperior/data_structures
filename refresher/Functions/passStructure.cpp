#include <iostream>

// practice passing by structure

struct Rectangle
{
    int length;
    int breadth;
};

void area(struct Rectangle r1)
{
    int area = r1.length * r1.breadth;
    // r1 is passed by value so new object is created here
    std::cout << "Rectangle length inside area: " << r1.length << std::endl;
    std::cout << "Rectangle breadth inside area: " << r1.breadth << std::endl;
    
    std::cout << "Area : " << area << std::endl;
}

// Struct pass by reference - we can see in main function that we have 
// modified the value of Rectangle r via passing it by reference (&r1)
int area2(struct Rectangle &r1)
{
    r1.length++;
    int area = r1.length * r1.breadth;
    return area;
}

// Struct pass by address
int areaPassByAddress(struct Rectangle *r1)
{
    // *r1 is the pointer to the Rectangle struct
    std::cout << "Inside Function: areaPassByAddress." << std::endl;
    std::cout << "This should be the address of alphaRec: " << r1 << std::endl;
    std::cout << "Now we will dereference r1 (alphaRec)...alphaRec length is: " << r1->length << std::endl;
    std::cout << "Now we will dereference r1 (alphaRec)...alphaRec breadth is: " << r1->breadth << std::endl;
    return 0;
}

int main()
{
    struct Rectangle r={10,20};
    // Make new Rectangle structure to play around with for call by address
    struct Rectangle alphaRec={5,6};
    area(r); // call by value
    int referenceArea = area2(r);
    std::cout << "We now have the area of the rectangle." << std::endl;
    std::cout << "Area with pass by reference. Expected is 220. Area: " << referenceArea << std::endl;
    
    // Function that passes by address
    areaPassByAddress(&alphaRec);

    // Check length of Rectangle r
    std::cout << "The length of Rectangle r is now : " << r.length << std::endl;
}