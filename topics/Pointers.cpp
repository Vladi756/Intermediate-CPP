#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;       // The pointer points to the address of the age variable

    double gpa = 2.5;
    doubp *pGpa = &gpa;

    string name = "Vladi";
    string *pName = &name;  // Pointers must be the same type as the variable they are pointing to.


    cout << &age << endl;   // Prints the address of age

    cout << pAge << endl;   // Prints what the pointer contains - which is the address of age
    cout << *pAge;          // Prints what the pointer points to which is age itself - this is reffered to as : Dereferencing a pointer.

    return 0;
}
