#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <fstream>    // make obj and use it
#include <utility>
#include <cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char L[2][500005];
		cin>>L[0];
		cin>>L[1];
		//cout<<L[1]<<L[0]<<endl;
		
		int len=strlen(L[0]);
		bool b=true;
		
		for(int i=0;i<len;i++){
			if(L[0][i]=='#' and L[1][i]=='#')
				b=false;
		}
		if(!b){
			cout<<"No\n";
			continue;
		}
		int ans=0;
		int pos=0;
		
		int a_len=0;
		int b_len=0;
		
		for(int i=0;i<len;i++){
			if(L[0][i]=='.')
				a_len++;
			else
				break;
		}
		for(int i=0;i<len;i++){
			if(L[1][i]=='.')
				b_len++;
			else
				break;
		}
		
	//	cout<<a_len<<" "<<b_len<<" "<<len<<" sfsf"<<endl;
		if(a_len<b_len)
			pos=1;
		
		for(int i=0;i<len-1;i++){
			if(L[pos][i+1]=='#')
			{
				//cout<<"pos "<<pos<<endl;
				pos=1-pos;
				ans++;
			}
		}
		
		cout<<"Yes\n";
		cout<<ans<<endl;
		
	}
	
return 0;
}

