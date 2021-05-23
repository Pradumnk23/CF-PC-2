#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
using namespace std;

#define mp                  make_pair
#define pb                  push_back
#define lli                 long long int
#define sl                  set<lli>
#define pl                  pair<lli,lli>
#define pi                  pair<int,int>
#define ml                  map<<lli,lli>
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define lld                  long double
#define all(x)              x.begin(),x.end()
#define fn                  for(lli i=0;i<n;i++)
#define rep(i,a,b)          for(lli i=a;i<b;i++)
#define repo(i,a,b)         for(lli i=a;i>=b;i--)
#define test()              lli test; cin>>test; while(test--)
#define fi                  first
#define se                  second
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define sp(x)               fixed << setprecision(x)
#define MOD                 1000000007

int main()
{
    fastio;
    test()
    {
        string s;
        cin>>s;
        lli n=s.length(), cnt=0;
        for(lli i=1; i<n; i++)
        {
            if(s[i-1]==s[i] && s[i]!='?')
            {cout<<-1;cnt=1;break;}
        }
        for(lli i=0; i<n; i++)
        {
            if(s[i]=='?' && cnt==0)
            {
                if(s[i-1]!='a' && s[i+1]!='a')
                    {s[i]='a'; cout<<"a";}
                else if(s[i-1]!='b' && s[i+1]!='b')
                    {s[i]='b'; cout<<"b";}
                else if(s[i-1]!='c' && s[i+1]!='c')
                    {s[i]='c'; cout<<"c";}
            }
            else if(cnt==0)
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
