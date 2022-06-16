#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
   
   while (row<=n)
   
   {
       char startchar='A';
   int inc_counter=1;
    while (inc_counter<=n-row+1)
   {
       cout<<startchar<<" ";
       inc_counter++;
       startchar++;
   }
 startchar=startchar-1;
   int dec_count=1;
   while (dec_count<=n-row+1)
   {
       cout<<startchar<<" ";
       dec_count++;
       startchar--;
   }
   cout<<endl;
   row++;   
   }
   

   
    return 0;
}