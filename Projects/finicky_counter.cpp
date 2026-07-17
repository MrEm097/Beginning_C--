// Разборчивый счетчик
#include <iostream>
using namespace std;

int main(void)
{
    int num, count, var;
    num = count = var = 0;

    cout << num << "/" << var << " Ограничение для счетчика~ ";
    cin >> num; // Ограничение для счетчика
    cout << num << "/" << var << " Что исключаем?~ ";
    cin >> var; // Что будем исключать
    cout << num << "/" << var << ":\n";

    while (true)
    {
        count += 1;

        if (count > num)
            break;
        if (count == var)
        {
            cout << "~\t";
            continue;
        }

        cout << count << '\t';
    }

    return 0;
}