#include <bits/stdc++.h>
using namespace std;
int maxXORInRange(int L, int R)
{
	int LXR = L ^ R;
	int msbPos = 0;
	while (LXR)
	{
		msbPos++;
		LXR >>= 1;
	}
	return (pow(2, msbPos)-1);
}
int main()
{
	int L,R;
    cin>>L>>R;
	cout << maxXORInRange(L, R) << endl;
	return 0;
}
