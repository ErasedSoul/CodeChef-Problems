#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(void){
	int t;ll n;string k;
	cin>>t;
	while(t-->0)
	{
		cin>>n;
		cin>>k;
		ll m=0;ll ten=1;
		for(int i=(k.size()-1);i>=0;i--)
		{
			m=((m%n)+((((int)k[i]-48)%n)*(ten%n))%n)%n;
			ten=((ten%n)*(10%n))%n;
		}
		//cout<<m<<endl;
		if(m==0)
		cout<<0<<endl;
		else if(m>=1 && m<(n/2))
		cout<<(2*m)<<endl;
		else if(m==(n/2) && n%2==0)
		cout<<(2*m-1)<<endl;
		else if(m==(n/2) && n%2!=0)
		cout<<2*m<<endl;
		else
		cout<<(2*(n-m))<<endl;
	}
}