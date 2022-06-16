#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

    int n;
    cin>>n;
    for(int row=1; row<=n; row++){
        for(int column=1; column<=row; column++){
            if(column==1||column==row){
                cout<<row;
            }
            else{
                cout<<"0";
            }
            if(column!=row){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}