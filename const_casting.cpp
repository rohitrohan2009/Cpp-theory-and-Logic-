#include<iostream>
using namespace std;
int main()
{
    int x = 12;
    const int y=7;//making y constant makes y a read-only variable
    x=y;//assigning the value of y to x thereby making x=7;
        //if we typed y=x, a.k.a, assigning the value of x to y? it would give a read-only error as we
        //can NOT assign any value whatsoever to a read-only variable y. It can NEVER change.
    cout<<x<<" "<< y;
}

//Output: '7 7'

