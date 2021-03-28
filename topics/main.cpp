#include <iostream>
#include <vector>
#include <array>

// Range Based for loop
int main(){
    std::vector<int>data = {1, 2, 3, 4, 5, 6};

    for(int k : data){              // For every iteration, k will contain an element from "data".
        std::cout << k << std::endl;    // Not a general loop - just to go through collections. AKA for each loop.
    }
    return 0;
}

/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void print_vector(vector<int> vector){       // Simple function to output all the guesses made.
    for(int i = 0; i < vector.size(); i++){
        cout << vector[i] << endl;
    }
}

int playgame(){
    vector<int> guesses;

    int random = rand() % 101;          // number between 0 and 100
    cout << "Guess a number:" << endl;
    while(true){
        int guess;
        cin >> guess;

        guesses.push_back(guess);

        if(guess == random){
            cout << "That's correct!" << endl;
            break;
        } else if(guess < random){
            cout << "Try a little bit higher!" << endl;
        } else {
            cout << "Too high! Try a little lower!" << endl;
        }
    }
    print_vector(guesses);  // Displays all of the guesses made.
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
