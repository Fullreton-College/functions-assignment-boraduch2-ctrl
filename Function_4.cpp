#include <iostream>
using namespace std;

//define necessary functions
void computeCoins(int coinValue, int& num, int& amountLeft);

int main()
{
    int cents;
    int quarters, dimes, pennies;
    char ans = 'y';

    while(ans == 'y' || ans == 'Y')
    {
        cout << "Enter change amount (1-99 cents): ";
        cin >> cents;

        int amountLeft = cents;

        computeCoins(25, quarters, amountLeft);
        computeCoins(10, dimes, amountLeft);
        computeCoins(1, pennies, amountLeft);

        cout << cents << " cents can be given as "
             << quarters << " quarter(s) "
             << dimes << " dime(s) and "
             << pennies << " penny(pennies)" << endl;
        
        cout << "Enter Y or y to continue, any other halts\n\n";
        cin >> ans;
    }

    return 0;
}

void computeCoins(int coinValue, int& num, int& amountLeft)
{
    num = amountLeft / coinValue;
    amountLeft = amountLeft % coinValue;
}
