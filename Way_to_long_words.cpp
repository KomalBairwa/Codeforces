#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if(str.length()>10)
        {
            cout<<str[0]<<to_string(str.length()-2)<<str[str.length()-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
    return 0;
}
