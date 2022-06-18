#include <iostream>
using namespace std;
int main()
{
    int n;
    int t;
    cin >> t;
    int maxright[10000];
    int maxleft[10000];
    int arr[100000];
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // maximum from right

        maxright[n - 1] = arr[n - 1];
        int maximum1 = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            maxright[i] = max(maximum1, arr[i]);
            maximum1 = maxright[i];
        }
        //    maximum from left
        maxleft[0] = arr[0];
        int maximum2 = arr[0];
        for (int i = 1; i < n; i++)
        {
            maxleft[i] = max(maximum2, arr[i]);
            maximum2 = maxleft[i];
        }
        int minimum;
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            minimum = min(maxleft[i - 1], maxright[i + 1]);
            if ((minimum - arr[i]) > 0)
                ans += minimum - arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}