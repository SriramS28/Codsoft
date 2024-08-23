#include <iostream>
#include <cstdlib>
#include <ctime>

void numberGame() {
    srand(time(0));
    int com_guess = rand() % 100 + 1;
    int guess;
    
    std::cout << "Guess the number between 1 and 100: ";
    
    while (true) {
        std::cin >> guess;
        
        if (guess > com_guess) {
            std::cout << "Too high! Try again: ";
        } else if (guess < com_guess) {
            std::cout << "Too low! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the correct number.\n";
            break;
        }
    }
}

int main() {
    numberGame();
    return 0;
}
