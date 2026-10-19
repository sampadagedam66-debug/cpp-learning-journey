// Loops + random numbers
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, tries = 0;

    cout << "Guess the number (1-100)\n";
    do {
        cout << "Your guess: ";
        cin >> guess;
        tries++;
        if (guess < secret) cout << "Too low!\n";
        else if (guess > secret) cout << "Too high!\n";
    } while (guess != secret);

    cout << "Correct! You took " << tries << " tries.\n";
    return 0;
}