#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Difficulty:\n"
         << "Easy - 1\n"
         << "Normal - 2\n"
         << "Hard - 3\n\n"
         << "Choose: ";

    cin >> num;

    if (num == 1)
    {
        cout << "You picked Easy";
    }
    else if (num == 2)
    {
        cout << "You picked Normal";
    }
    else if (num == 3)
    {
        cout << "You picked Hard";
    }
    else
        cout << "Error";
}
