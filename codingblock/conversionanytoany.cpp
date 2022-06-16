#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main ()
{
    int initial_radix, final_radix;
    cin >> initial_radix >> final_radix;
    int n;
    cin >> n;
    int decimal = 0;
    int count = 0;
    while (n!=0)
    {
        int rem = n % 10;
        decimal += rem * pow(initial_radix, count);
        count++;
        n /= 10;
    }
    int unit[n];
    int counter = 0;
    while (decimal)
    {
        counter++;
        unit[counter] = decimal % final_radix;
        decimal /= final_radix;
    }

    for (int i = counter; i > 0; i--)
    {
        if (unit[i] < 10)
        {
            cout << unit[i];
        }
    }
}