#include <iostream>

using namespace std;

void print_array(int arr[], int size){      // Passing an Array into a function

    for(int i = 0; i < size; i ++) {
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main(){

    int SIZE = 100;
    int guesses[SIZE];

    int count = 0;

    for(int i = 0; i < SIZE; i ++){
       if(cin >> guesses[i]){   // cin only evaluates to true if it successfuly stores its value.

            count++;
       } else {
            break;
       }
    }
    cin.ignore(10000, '\n');

    print_array(guesses, count);
    cin.clear();
    std::cin.ignore(10000, '\n');       // Cleaning up the input stream.
    return 0;
}
