#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n][3];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    int x=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i][1]=='+')
          x++;
       else
          x--;
    }
    cout<<x;
    return 0;
}
