#include <iostream>
using namespace std;

int main()
{
    int sumSpeed, sumFight, sumBonus;
    // сумма очков за: скорость, драку и бонусов

    cout << "Sum speed:\t";
    cin >> sumSpeed;

    cout << "Sum fight:\t";
    cin >> sumFight;

    cout << "Sum bonus:\t";
    cin >> sumBonus;

    cout << "Result:\t" << (sumSpeed + sumFight + sumBonus) / 3.0;
}