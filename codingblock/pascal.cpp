#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		int value=1;
		// for(int k=n-i;k>0;k--){
		// 	cout<<" ";
			for(int j=1;j<=i;j++){
				cout<<value<<"\t";
				value=value*(i-j)/j;
			// }
			
		} 
		cout<<endl;
	}
	return 0;
}