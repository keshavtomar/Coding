#include<iostream>
using namespace std;
int main()
{   int x=0,y=0;
    char direction;
    direction=cin.get();
    while (direction!='\n')
    {
        if (direction=='N')
        {
            y++;
        }
        else if(direction=='S')
        {
            y--;
        }
         else if(direction=='E')
        {
            x++;
        }
         else if(direction=='W')
        {
            x--;
        }
        
    }
    

    return 0;
}