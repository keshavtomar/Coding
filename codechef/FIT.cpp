// Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is XX km away from his home.

// If his office is open on 55 days in a week, find the number of kilometers Chef travels through office trips in a week.

// Input Format
// First line will contain TT, number of test cases. Then the test cases follow.
// Each test case contains of a single line consisting of single integer XX.

#include <iostream>
using namespace std;

int main() {
	int test;
	int distance;
	cin>>test;
	while(test){
	    cin>>distance;
	    cout<<5*(2*distance)<<endl;
	    test--;
	}
	return 0;
}
