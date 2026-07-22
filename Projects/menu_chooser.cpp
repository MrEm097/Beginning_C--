// Выбор сложности игры
// Реализация перечисления и switch case
#include <iostream>
using namespace std;

enum difficulty
{
    EASY,
    NORMAL,
    HARD
};

int main()
{
    int num = 0;

    cout << "Difficulty:\n"
         << "Easy - 1\n"
         << "Normal - 2\n"
         << "Hard - 3\n\n"
         << "Choose: ";

    cin >> num;

    cout << "You picked ";

    switch (num - 1)
    {
    case difficulty::EASY:
        cout << "Easy";
        break;
    case difficulty::NORMAL:
        cout << "Normal";
        break;
    case difficulty::HARD:
        cout << "Hard";
        break;

    default:
        cout << "Error";
        break;
    }
}
