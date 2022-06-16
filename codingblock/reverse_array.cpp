#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}
	for(int j=n-1;j>=0;j--){
		if (arr[0]==0)
		{
			cout<<arr[0];
			continue;
		}
		else{
		cout<<arr[j];
		cout<<endl;
		}
	}

	return 0;
}