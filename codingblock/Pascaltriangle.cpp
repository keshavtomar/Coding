#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    cout << endl;
 
    for (int row = 0; row < n; row++)
    {
        int val = 1;
        for (int col = 1; col < (n - row); col++)
        {
            cout << "   ";
        }
        for (int k = 0; k <= row; k++)
        {
            cout << "      " << val;
            val = val * (row - k) / (k + 1);
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}