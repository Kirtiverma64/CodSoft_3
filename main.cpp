#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    
    int secretNumber = rand() % 5 + 1;

    std::cout << "Welcome to the guessing game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 5." << std::endl;

    int userGuess;
    while (true) {
        
        std::cout << "Guess a number: ";
        std::cin >> userGuess;

        if (userGuess == secretNumber) {
            std::cout << " Congratulations! You guessed the correct number." << std::endl;
            break;
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    return 0;
}

