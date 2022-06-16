#include<iostream>
using namespace std;
int main()
{
    int side;
    cin>>side;
const int area=side*side;
// area=area+2; we cant update the variable declared by constant;
// value of const should be given at the time of declaration if not done it will take garbage value and then we cant update it.
cout<<area;
    return 0;
}