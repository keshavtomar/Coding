#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int count=1;
    for(int row=0; row<n; row++){
        for(int column=0; column<=row; column++){
            cout<<count;
            count++;
            if(column!=row){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}