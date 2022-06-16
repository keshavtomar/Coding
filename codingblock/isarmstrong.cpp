#include <math.h>
#include<iostream>
using namespace std;
int main()
{
int start, end, i, temp1, temp2, remainder, n = 0, result = 0;
int arr[10000];
cin >> start;
i=start;
temp2 = i;
temp1 = i;
while (temp1 != 0)
{
temp1 /= 10;
++n;
}
while (temp2 != 0)
{
remainder = temp2 % 10;
result += pow(remainder, n);
temp2 /= 10;
}
if (result==start)
{
    cout<<"true"<<endl;
}
else
{
    cout<<"false";
}
return 0;
}