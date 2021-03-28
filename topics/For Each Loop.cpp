#include <iostream>
#include <vector>
#include <array>

// Range Based for loop
int main(){
    std::vector<int>data = {1, 2, 3, 4, 5, 6};

    for(int k : data){                  // For every iteration, k will contain an element from "data".
        std::cout << k << std::endl;    // Not a general loop - just to go through collections. AKA for each loop.
    }
    return 0;
}
