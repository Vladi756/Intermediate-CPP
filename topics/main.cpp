#include <iostream>
#include <vector>

void print_vector(std::vector<int> data){
           // Passing vector to a function
    for(int i = 0; i < data.size(); i++){
        std::cout << data[i] << std::endl;
    }
}

int main(){

        std::vector<int> data = {1,2,3};    // Vector
        data.push_back(12);
        data.pop_back();

        print_vector(data);

        return 0;
}



/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>                        // Because random numbers are used

using namespace std;

void print_array(int array[], int count){       // Simple function to output all the guesses made.
    for(int i = 0; i < count; i++){
        cout << array[i] << endl;
    }
}

int playgame(){
    int guesses[100];
    int guess_count = 0;

    int random = rand() % 101;          // number between 0 and 100
    cout << "Guess a number:" << endl;
    while(true){
        int guess;
        cin >> guess;

        guesses[guess_count] = guess;
        guess_count++;          // Starts filling up the array with out guesses

        if(guess == random){
            cout << "That's correct!" << endl;
            break;
        } else if(guess < random){
            cout << "Try a little bit higher!" << endl;
        } else {
            cout << "Too high! Try a little lower!" << endl;
        }
    }
    print_array(guesses, guess_count);  // Displays all of the guesses made.
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
