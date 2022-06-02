#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    double mngr1, mngr2, mngr3;
    int sale1, sale2, sale3, best;

    cout << "Введите сумму продаж первого менеджера: \n";
    cin >> sale1;
    cout << "Введите сумму продаж второго менеджера: \n";
    cin >> sale2;
    cout << "Введите сумму продаж третьего менеджера: \n";
    cin >> sale3;

    if (sale1 < 500) {mngr1 = 200 + (sale1 -(sale1 * 0.97));}
    else if(sale1 > 500 && sale1 < 1000) {mngr1 = 200 + (sale1 - (sale1 * 0.95));}
    else { mngr1 = 200 + (sale1 - (sale1 * 0.92)); }
    
    if (sale2 < 500) { mngr2 = 200 + (sale2 - (sale2 * 0.97)); }
    else if (sale2 > 500 && sale2 < 1000) { mngr2 = 200 + (sale2 - (sale2 * 0.95)); }
    else { mngr2 = 200 + (sale2 - (sale2 * 0.92)); }

    if (sale3 < 500) { mngr3 = 200 + (sale3 - (sale3 * 0.97)); }
    else if (sale3 > 500 && sale3 < 1000) { mngr3 = 200 + (sale3 - (sale3 * 0.95)); }
    else { mngr3 = 200 + (sale3 - (sale3 * 0.92)); }
    
    if (mngr1 > mngr2) { best = 1; }
    else { best = 2; }
    if (mngr2 < mngr3) { best = 3; }

    switch (best) {
    case 1: mngr1 = mngr1 + 200;
        break;
    case 2: mngr2 = mngr2 + 200;
        break;
    case 3: mngr3 = mngr3 + 200;
        break;

    }
    cout << "Лучшим менеджером становится - " <<best<< endl;
    cout <<"Зарплата первого менеджера - "<< mngr1 << endl;
    cout <<"Зарплата второго менеджера - "<< mngr2 << endl;
    cout <<"Зарплата третьего менеджера - "<< mngr3 << endl;
}

