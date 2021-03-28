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
