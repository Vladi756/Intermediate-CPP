#include <iostream>

void swap(int &a, int &b){		// Simple swap function - can be used in sorting algorithms
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 5;
    int b = 7;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    swap(a,b);
    std::cout << "" << std::endl;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}
