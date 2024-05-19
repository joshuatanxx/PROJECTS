#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

bool isvalidword(const string& word){
for (char x : word){
   if (!std::isalpha(x)){
    return false;
   }
}
return true; 
}



int main() {
std::string userName1
std::string userName2
std::cout << "WELCOME WELCOME WELCOME TO WORDLE!!" << std::endl;
std::cout << "Please enter the number of participants: " << std::endl;
std::string userInput;
std::cout << "Enter a word: ";
std::cin >> userInput;

    if (isvalidword(userInput)) {
        std::cout << "Input is a valid word." << std::endl;
    } else {
        std::cout << "Input is not a valid word. Please enter a valid word" << std::endl;
    }

    return 0;
}