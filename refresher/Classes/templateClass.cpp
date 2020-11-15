#include <iostream>
#include <string>

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    //Constructor
    Arithmetic(T a, T b);
    // Add function
    T add();
    T substract();
    T multiply();
    T divide();
};

// Use scope resolution to build the functions outside of the class declaration

// Constructor
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    return this->a + this->b;
}
template <class T>
T Arithmetic<T>::substract()
{
    return this->a - this->b;
}
template <class T>
T Arithmetic<T>::multiply()
{
    return a * b;
}
template <class T>
T Arithmetic<T>::divide()
{
    std::cout << "A: " << a << std::endl;
    std::cout << "A this: " << this->a << std::endl;
    return a / b;
}

void printText(std::string s)
{
    std::cout << s << std::endl;
}

int main()
{
    Arithmetic<int> mathStuff(10, 2);
    //Arithmetic<double> mathStuffDouble(3.3, 6.2);

    printText("Sum: ");
    std::cout << mathStuff.add() << std::endl;
    printText("Difference: ");
    std::cout << mathStuff.substract() << std::endl;
    printText("Product: ");
    std::cout << mathStuff.multiply() << std::endl;
    printText("Quotient: ");
    std::cout << mathStuff.divide() << std::endl;

    /* printText("Sum: ");
    std::cout << mathStuffDouble.add() << std::endl;
    printText("Difference: ");
    std::cout << mathStuffDouble.substract() << std::endl;
    printText("Product: ");
    std::cout << mathStuffDouble.multiply() << std::endl;
    printText("Quotient: ");
    std::cout << mathStuffDouble.divide() << std::endl; */

    return 0;
}