#include<iostream>
using namespace std;
int main()
{
    int x = 12;
    const int y=7;//making y constant makes y a read-only variable
    x=y;
    cout<<x<<" "<< y;
}
