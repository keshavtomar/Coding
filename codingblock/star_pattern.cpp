#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		// spaces
		for(int space=1;space<=n-i;space++){
		cout<<"  ";
		}
		// star
		for(int star=1;star<=i;star++){
			cout<<"* ";
		}
        cout<<endl;
	}
	return 0;
}