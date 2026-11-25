#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int number_to_guess = rand() % 101;
    int lives = 3, attempt;
    bool guessed = false;

    while (lives > 0)
    {
        if (lives == 3)
            cout << "Make your first attempt: ";
        else if (lives == 2)
            cout << "Submit your second attempt: ";
        else
            cout << "Submit your third and last attempt: ";

        cin >> attempt;

        if (attempt == number_to_guess)
        {
            cout << "Congratulations! You guessed the number!\n";
            guessed = true;
            break;
        }
        else
        {
            lives--;
            if (lives > 0)
            {
                cout << "Oops! You didn't guess, but try again!\n";
            }
        }
    }

    if (!guessed)
    {
        cout << "Unlucky today? You ran out of lives! The number was: " << number_to_guess << "\n";
    }

    return 0;
}