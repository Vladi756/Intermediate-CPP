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


/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>                        // Because random numbers are used

using namespace std;

int playgame(){
    int random = rand() % 101;          // number between 0 and 100
    cout << "Guess a number:" << endl;
    while(true){
        int guess;
        cin >> guess;
        if(guess == random){
            cout << "That's correct!" << endl;
            break;
        } else if(guess < random){
            cout << "Try a little bit higher!" << endl;
        } else {
            cout << "Too high! Try a little lower!" << endl;
        }
    }
    return 0;
}

int main() {

    srand(time(NULL));          // seeds random number
    int choice;

    do {
    cout << "0. Quit" << endl << "1. Play Game\n";
    cin >> choice;

    switch(choice) {
    case 0:
        cout << "Game Over." << endl;
        return 0;
    case 1:
        cout << "Let's play" << endl;
        playgame();
        break;
    }

    } while (choice != 0);


    return 0;
}
*/
