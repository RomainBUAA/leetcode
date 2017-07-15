

#include <iostream>
using namespace std;
int play()
{
    for(int i=0;i<10;i++)
    {
        if(i==3)
        {
            return i;
        }
    }
}
int main()
{
    int x = play();
    cout<<"xvalu"<<x;
    return 0;
}
