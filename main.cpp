#include <iostream>
#include <vector>

void print_contents(std::vector<int>& input)
{
    for (int i = 0; i < input.size(); i++)
    {
        std::cout<< input[i]<<std::endl;

    }
}

int main() {
    int size;

    std::cout<<" Provide a size for your array: "<<std::endl;
    std::cin >> size;
    std::vector<int> numbers;

    for (int i = 0; i < size; i++)
    {
        numbers.push_back(i);

    }
    print_contents(numbers);

    return 0;
}

