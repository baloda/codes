#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <fstream>    // make obj and use it
#include <utility>
using namespace std;
int main()
{

	int t;
	cin>>t;
	long long a,b,temp=0,ans=1000000,down=0;
	while(t--)
	{
		cin>>a>>b;
		ans=10000000;
		down=0;
		while(a){
			temp=a;
			
			long long int count=0;
			while(temp<b){
				count++;
				temp<<=1;
			}
			if(temp==b){
				ans=min(ans,count+down);
				break;
			}
			if(a&1)
				a=(a-1)>>1;
			else
				a>>=1;
			down++;
		}
		cout<<ans<<endl;
	}	
	
return 0;
}

