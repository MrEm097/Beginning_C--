// Игра "Угадай моё число"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

typedef unsigned int ra;

int main(void)
{
    srand(static_cast<ra>(time(0)));

    int num = (rand() % 100) + 1;
    int count = 0, var = 0;

    while (true)
    {
        cout << "Enter number: ";

        cin >> var;
        count++;

        if (var < num)
            cout << "Too high\n";
        else if (var > num)
            cout << "Too low\n";
        else
            break;
    }

    cout << "Great\n"
         << "You got it in " << count << " guesses.";

    return 0;
}