#include <iostream>
using namespace std;

typedef unsigned int bigInt; // Упрощаю название типа unsigned int
enum difficulty
{
    SUPER_E,
    EASY,
    NORMAL,
    HARD,
    SUPER_HARD
}; // Создаю перечисление сложностей

int main()
{
    bigInt score = 0;     // Кол-во очков
    int killedEnemy = 10; // Убито врагов
    difficulty myDifficulty = HARD;

    cout << "You:\n"
         << " - Difficulty HARD\n"
         << " - Score 0\n";

    cout << "\nkilled 10 enemy!\n"
         << "Great\n"
         << "You have " << score + (killedEnemy * myDifficulty) << " Units!\n";
}