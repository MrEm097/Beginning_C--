// Демонстрирует поведение случайных чисел
#include <iostream>
#include <cstdlib>
#include <ctime>

typedef unsigned int ra;

int main(void)
{
    using namespace std;
    srand(static_cast<ra>(time(0)));
    // сеет генератор случ. чисел
    // используя Seed типа ra оталкиваясь от времени

    int die = (rand() % 6) + 1;
    // создается псевдослучайное число в диапазоне [1 - 6]

    cout << "You rolled a " << die;

    return 0;
}