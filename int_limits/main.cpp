#include <iostream>
#include <limits>

using namespace std;
int main(){
    std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Maximum value for unsigned int: " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "Minimum value for unsigned int: " << std::numeric_limits<unsigned int>::min() << std::endl;
}