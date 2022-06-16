#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int position[n];
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
		position[arr[i]]=i;
		
	}

	for (int i = 0; i < n; i++)
	{	
		cout<<position[i]<<"  ";
		
	}
	

	return 0;
}