#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
    {
        int n;
        cin >> n;
        int a[2 * n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maximum = 0;
        int current1 = 0;
        int count = 0;
        int current2 = 0;

        int totalsum = 0;
        int minimum = 0;

        for (int i = 0; i < n; i++)
        {
            totalsum += a[i];
            current1 += a[i];
            current2 += a[i];

            if (current1 < 0)
            {
                current1 = 0;
            }
            if (current2 > 0)
            {
                current2 = 0;
            }

            minimum = min(minimum, current2);
            maximum = max(maximum, current1);
        }

        cout << max(maximum, (totalsum - minimum)) << endl;
    }
    }
    return 0;
}