#include <iostream>
using namespace std;

int main() {
	int n,X,Y;
	int i=1;
	cin>>n;
	while(i<=n){
	    cin>>X>>Y;
	    int Z=X-Y;
        
	    Z=abs(Z);
	    cout<<Z<<endl;
	    i++;
	    
	}
	return 0;
}
