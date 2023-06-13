#include<iostream>
using namespace std;
int main(){
	string str1, str2;
	cin>>str1>>str2;
	int n = str1.length()-1;
	for(int i=0;i<=n;i++)
	{
		str1[i] = toupper(str1[i]);
		str2[i] = toupper(str2[i]);
	}
	//cout<<str1<<" "<<str2;
	
	if(str1.compare(str2)>0)
	    cout<<1;
	else if(str1.compare(str2)<0)
	    cout<<-1;
	else
	    cout<<0;
	return 0;
}
