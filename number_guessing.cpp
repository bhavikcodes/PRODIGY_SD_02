#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    // Loop until the user guesses the correct number
    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        // Provide feedback
        if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number." << endl;
            cout << "It took you " << attempts << " attempts to guess correctly." << endl;
        }
    }

    return 0;
}
