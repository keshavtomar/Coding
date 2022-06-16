#include<iostream>
using namespace std;
int main()
{   int temp;
    int T;
    int N;
    int k=1;
    cin>>T;
    
    while(k<=T){
        cin>>N;
        int i=0;
        int arr[N];
        while (i<=N-1)
        {
            cin>>arr[i];
            i++;
        }
        for (int i = 0; i < N-2; i++)
        {
            for (int j = i+1; j<=N-i-2; j++)
            {
                if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
            }
            
        }
    for(int j=N-1;j>=0;j--){
		cout<<arr[j];
		// cout<<endl;
	}

        k++;
    }
    return 0;
}