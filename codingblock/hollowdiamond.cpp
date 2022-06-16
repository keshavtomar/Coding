#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int middle = n / 2 + 1;
    for (int row = 0; row <= n / 2; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col > middle - row && col < middle + row)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            if (col != n)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int row = n / 2; row > 0; row--)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col > middle - row + 1 && col < middle + row - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            if (col != n)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}