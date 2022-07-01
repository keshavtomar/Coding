/*Chef took an examination two times. In the first attempt, he scored XX marks while in the second attempt he scored YY marks. According to the rules of the examination, the best score out of the two attempts will be considered as the final score.

Determine the final score of the Chef.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first line of each test case contains two integers XX and YY — the marks scored by Chef in the first attempt and second attempt respectively. */

#include<iostream>
using namespace std;
int main()
{
   int test,first,second;
   cin>>test;
   while(test){
   cin>>first>>second;
   if (first>second)
   {
    cout<<first<<endl;
   }
   else{
    cout<<second<<endl;
   }
   test--;
   }
    return 0;
}