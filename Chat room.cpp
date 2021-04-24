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
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define ld                  long double
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

int gcd(int A, int B)
{
    if (B == 0)
        return A;
    else
        return gcd(B, A % B);
}
int main()
{
    string s;
    cin>>s;
    lli n=s.length();
    lli cnt=0,temp;
    string str={};
    vl v;
    if(n<5){no;return 0;}
    for(lli i=0; i<n; i++)
    {
        if(s[i]=='h')
            {str+=s[i];temp=i;v.pb(i);break;}
    }
    for(lli i=temp; i<n; i++)
    {
        if(s[i]=='e')
            {str+=s[i];temp=i;v.pb(i);break;}
    }
    for(lli i=temp; i<n; i++)
    {
        if(s[i]=='l')
            {str+=s[i];v.pb(i);temp=i;cnt++;if(cnt==2){break;}}
    }
    for(lli i=temp; i<n; i++)
    {
        if(s[i]=='o')
            {str+=s[i];v.pb(i);temp=i;break;}
    }
    if(v[0]<v[1] && v[1]<v[2] && v[2]<v[3] && v[3]<v[4])
        cnt=1;
    /*cout<<str;
    for(auto &i:v)
        cout<<i<<" ";*/
    if(str=="hello" && cnt==1 )
        yes;
    else
        no;
	return 0;
}
