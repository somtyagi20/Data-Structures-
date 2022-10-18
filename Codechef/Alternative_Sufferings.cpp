#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string flip(string s,int n)
{
    string ans = "";
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1') ans += '0';
        else
        {
            if(i != 0 && s[i - 1] == '1') ans += '1';
            else if(i != n-1 && s[i + 1] == '1') ans += '1';
            else ans += '0';
        }
    }
    return ans;
}

vector<ll> fill(string s,ll n)
{
    vector<ll> ans(n,-1);
    ll cnt = -1;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == '0') ans[i] = cnt;
        else
        {
            cnt = 0;
            ans[i] = cnt;
        }
        if(cnt != -1) cnt++;
    }
    cnt = -1;
    for(ll i=n-1; i>=0; i--)
    {
        if(s[i] == '0') 
        {
            if(ans[i] == -1) ans[i] = cnt;
            else if(cnt != -1) ans[i] = min(ans[i],cnt);
        }
        else
        {
            cnt = 0;
            ans[i] = min(ans[i],cnt);
        }
        if(cnt != -1) cnt++;
    }
    return ans;
}

string solve(string s,ll n,ll k)
{
    s = flip(s,n); k--;
    if(k == 0) return s;
    vector<ll> x = fill(s,n);
    string ans = "";
    for(int i=0; i<n; i++)
    { 
        if(x[i] == -1) return s; 
        if(k < x[i]) ans += '0';
        else if((k - x[i]) % 2 == 0) ans += '1';
        else ans += '0';
    } 
    return ans;
}

int main() {
	int test; cin>> test;
	while(test--)
	{
	    ll n,k; cin>>n>>k;
	    string s; cin>>s;
	    cout<<solve(s,n,k)<<endl;
	}
	return 0;
}
