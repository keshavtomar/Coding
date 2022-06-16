#include<iostream>
using namespace std;
int main()
{
    int row=1,column=1,n;
    cin>>n;
    while(row<=n){
        int countspace=1;
        while (countspace<=(n-row))
        {
            cout<<"    ";
            countspace++;
        }
        int countinc=1;
        int firstinc=row;
        while (countinc<=row)
        {
        cout<<firstinc<<"   ";
        firstinc++;
        countinc++; 
        }
        int countdec=1;
        int firstdec=2*row-2;
        while (countdec<=(row-1))
        {
            cout<<firstdec<<"   ";
            countdec++;
            firstdec--;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}

