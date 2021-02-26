#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *age = &age; ??


    double gpa = 2.5;
    string name = "Vladi";

    cout << &age;

    return 0;
}

/*
// ------- NESTED LOOPS --------- //

#include <iostream>

using namespace std;

int main()
{
    int numberGrid[3][2] = { {1, 2},        // Two dimensional array initliazation.
                             {3, 4},
                             {5, 6}
                           };


    for(int i = 0; i < 3; i++) {        // Iterates through all elements of 2d array
        for(int j = 0; j < 2; j++) {    // Iterates through all the sub arrays
            cout << numberGrid[i][j];   // Prints out all elements
        }
        cout << endl;                   // New Line to help differentiate between sub arrays.
    }

    return 0;
}

*/


 // ------------ 2D ARRAYS ------------ //
 /* #include <iostream>

using namespace std;

int main()
{
    int numberGrid[5][2] ={ {1, 2},
                            {3, 4},
                            {5, 6},
                            {7, 8},
                            {9, 10},
                                    };

    cout << numberGrid[1][1];

    return 0;
}

A little bit on 2d Arrays:
In a 2D array, every element of the array.
The first [] signifies the element (array)
that we want to access. The second [],
signifies the element within the array that
we want to access.
All elements are 0 based index.
*/
