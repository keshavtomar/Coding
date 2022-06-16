#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}
	int number;
	cin>>number;
	for(int j=0;j<=n-1;j++){
		if(number==arr[j]){
			cout<<j;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}