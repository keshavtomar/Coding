#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int total_item;
    cin >> total_item;
    int price[total_item];
    for (int i = 0; i < total_item; i++)
    {
        cin >> price[i];
    }
    int queries;
    cin >> queries;
    int total_money[queries], minimum_item[queries];
    for (int i = 0; i < queries; i++)
    {
        cin >> total_money[i] >> minimum_item[i];
    }

    for (int i = 0; i < queries; i++)
    {
        int counter = 0;
        bool capable = false;
        for (int j = 0; j < total_item; j++)
        {
            if (total_money[i] % price[j] == 0)
            {
                counter++;
            }
            if (counter >= minimum_item[i])
            {
                capable = true;
                break;
            }
        }
        if (capable)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}