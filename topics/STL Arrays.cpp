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
STL arrays are Standard Template Library Arrays which are like normal arrays in that they are statically sized,
but they also have some of the functionality vecotrs have, like the size() method.
*/
