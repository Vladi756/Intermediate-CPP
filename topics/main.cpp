#include <iostream>
#include <vector>

void display(std::vector<int>vec){
    for(n : vec){
        std::cout << n << std::endl;
    }
}                               // Displays the vector.

int main(){

    std::vector<int>data = {1,2};
    display(data);

    data.push_back(3);          // Adds specified item to end of vector.
    display(data);

    data.push_back(4);
    data.push_back(5);
    display(data);

    data.pop_back();
    display(data);              // Removes last item.

    data.pop_back();
    data.pop_back();
    display(data);

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
