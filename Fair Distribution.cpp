#include<iostream>
using namespace std;

int main()
{
    int x,y,temp;
    cin>>x>>y;
    temp=y;
    while(1)
    {
        if(y%x==0)
        {
            break;
        }
        y++;
    }

    cout<<y-temp<<endl;
    
    return 0;
}
