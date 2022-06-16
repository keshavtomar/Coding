#include<iostream>
using namespace std;
int main() {
	char sig;
	int n1,n2;
	do{
		cin>>sig;
		if(sig=='+'){
			cin>>n1>>n2;
			cout<<n1+n2<<endl;
		}
		else if(sig=='-'){
			cin>>n1>>n2;
			cout<<n1-n2<<endl;
			
		}
		else if(sig=='%'){
			cin>>n1>>n2;
			cout<<n1%n2<<endl;
			
		}
		else if(sig=='*'){
			cin>>n1>>n2;
			cout<<n1*n2<<endl;
			
		}
		else if(sig=='/'){
			cin>>n1>>n2;
			cout<<n1/n2<<endl;
            }
			else{
				cout<<"Invalid operation. Try again";
			}	
		
	}
    while (sig!=('x' or 'X'));
    
	return 0;
}