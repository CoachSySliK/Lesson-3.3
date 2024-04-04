#include <iostream>

using namespace std;

int main()
{
    string userName;
    string race;

    cout << "Введите имя вашего персонажа: ";
    cin >> userName;
    cout << "Введите название вашей расы: ";
    cin >> race;
    cout << "В далёкой-далёкой галактике родился " << race << " по имени " << userName << ".\nДа прибудет с тобой сила, " << userName << "!\n";

    return 0;
}
