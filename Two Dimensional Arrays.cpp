#include <iostream>

using namespace std;

int main()
{
    int numberGrid[5][2] ={ {1, 2},             // Two dimensional arrays usually aren't defined like this, this is merely to help illustrate how they work.
                            {3, 4},
                            {5, 6},
                            {7, 8},
                            {9, 10},
                                    };

    cout << numberGrid[1][1];   // Would print out the first indexed element of the array {3, 4} - the output is 4. 

    return 0;
}

/*
A little bit on 2D Arrays:
In a 2D array, every element of the array. The first [] signifies the element (array) that we want to access. The second [], signifies the element within the array that
we want to access. All elements are 0 based index, just like in normal one dimensional arrays. In fact, two dimensional arrays are stored in memory the same way one - D
arrays are, we use two dimensional arrays simply to make our job as programmers easier.
*/
