#include <iostream>


void fun(int a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        std::cout << a[i] << std::endl;
    }
}

int main()
{
    int testArray[5]={2,4,6,8,10};
    fun(testArray,5);
}