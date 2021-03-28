#include <iostream>
#include <vector>
#include <array>


void print_array(std::array<int, 20> data){
           // Passing vector to a function
    for(int i = 0; i < data.size(); i++){
        std::cout << data[i] << std::endl;
    }
}

int main(){

        std::array<int, 20> data = {1,2,3};    // Statically sized, like normal array

        print_array(data);

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
