#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <vector>

int main() {

    std::map<std::string, std::vector<int>> dictionary;

    std::ifstream input;
    input.open("dummy text file.txt");

    if (input.is_open()) {
        std::string word;
        int line_num = 0;

        while (getline(input, word)) {
            if (dictionary.find(word) == dictionary.end()) {
                dictionary.insert({word, {line_num}} );
            } else {
                dictionary[word].push_back(line_num);
            }
        ++line_num;
        }

    }
    std::string tmp;

    std::cout << "Choose a word: "<<std::endl;
    std::cin >> tmp;

    std::cout << "The word " << tmp << " appears in lines: "<<std::endl;
    for (int i = 0; i < dictionary[tmp].size(); i++ )
    {
        std::cout<<dictionary[tmp][i]<<std::endl;
    }
    return 0;
}

