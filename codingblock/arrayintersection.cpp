#include<iostream>
using namespace std;
int main()
{   
    int n,temp;
    int count=0;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    for(int i=0; i<=(n-2); i++)
    {
        for(int j=0; j<=(n-i-2); j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
       cin>>b[i];
    }
     for(int i=0; i<=(n-2); i++)
    {
        for(int j=0; j<=(n-i-2); j++)
        {
            if(b[j]>b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1]= temp;
            }
        }
    }
    int counter=-1;
    for (int j = 0; j < n; j++)
    {
        for (int k = (counter+1); k <n ; k++)
        {
            if (a[j]==b[k]) 
            {
                c[count]=a[j];
                count++;
                counter=k;
                break;
            }   
           
        } 
        }
		cout<<"[";
        for (int j = 0; j < count; j++)
        {
			if(j!=(count-1))
            cout<<c[j]<<", ";
			else
			cout<<c[j]<<"]";
        }

    return 0;
}