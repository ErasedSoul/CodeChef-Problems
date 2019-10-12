#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void factorize(ll n,ll a) 
{ 
	ll count = 0; 
    vector<ll>st; 
	while (!(n % 2)) { 
		n=n/2; 
		count++; 
	} 
	if (count){
	    st.push_back(2);
      count=0;
    } 
	for (ll i = 3; i <= sqrt(n); i += 2) { 
		count = 0; 
		while (n % i == 0) { 
			count++; 
			n = n / i; 
		} 
		if (count)
        {
            if(i>=a && i!=3)
          st.push_back(i);
          count=0;

        } 
	}  
	if (n > 2)
    {
        if(n>=a)
      st.push_back(n);
      count=0;
    }
     int k=st.size();
    // for(int i=0;i<k;i++)
     //cout<<st[i]<<' ';
     //cout<<endl;
     k=(0+k-1)/2;
     ll x=1594323;ll y=st[k];ll b;
     ll xx=x*x;
     ll yy=y*y;
     cout<<1<<" "<<y<<endl;
     cin>>b;
     count=0;
     vector<ll>::iterator itr;
     for (itr = st.begin(); itr !=st.end(); itr++){ 
        if((yy%(*itr))==b && (xx%(*itr))==a)
        {
        	cout<<2<<" "<<(*itr)<<endl;
        	break;
		}
    } 
} 
int main(void)
{
	int t;ll x,a;string test;
	cin>>t;
	x=1594323;
	while(t-->0)
	{
		cout<<1<<' '<<x<<endl;
		cin>>a;
		if(a!=0)
		{
		if(a==-1)
		exit(0);
		factorize(((x*x)-a),a);
		cin>>test;
		if(test=="Yes")
		continue;
		else
		exit(0);
		}
		else
		{
		  cout<<"2 "<<3<<endl;
		  cin>>test;
		  if(test=="Yes")
		  continue;
		   else
		   exit(0);
		}
	}
}
