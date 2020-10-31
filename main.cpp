#include <iostream>

int main() {

    int variable = 1337;
    int* ptr;

    std::cout << &ptr <<std::endl;
    std::cout << &variable <<std::endl;
    ptr = &variable;
    std::cout << *ptr <<std::endl;

    *ptr = 12;
    std::cout << variable <<std::endl;

    return 0;
}
