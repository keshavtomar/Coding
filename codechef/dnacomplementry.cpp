/*You are given the sequence of Nucleotides of one strand of DNA through a string SS of length NN. SS contains the character A, T, C,A,T,C, and GG only.

Chef knows that:

AA is complementary to TT.
TT is complementary to AA.
CC is complementary to GG.
GG is complementary to CC.
Using the string SS, determine the sequence of the complementary strand of the DNA.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
First line of each test case contains an integer NN - denoting the length of string SS.
Second line contains NN characters denoting the string SS.*/
#include<iostream>
using namespace std;
int main()
{
    int test;
    string s;
    cin>>test;
    while(test){
        int n;
        cin>>n;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
       if (s[i]=='A')
    {
       cout<<'T';
    }
    else if (s[i]=='C')
    {
        cout<<"G";
    }
    else if (s[i]=='G')
    {
        cout<<"C";
    }
    else if (s[i]=='T')
    {
        cout<<"A";
    }
    }
    test--;
    }
    return 0;
}