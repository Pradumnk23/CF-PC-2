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
    fastio;
    lli n;
    cin>>n;
    map<lli,string>temp;
    string s;
    string s1;
    string ans={};
    lli cnt=1,cnt2=0;
    cin>>s;
    for(lli i=1; i<n; i++)
    {
        cin>>s1;
        if(s==s1)
            cnt++;
        else
            {cnt2++;ans=s1;}
    }
    if(cnt>cnt2)
        cout<<s<<endl;
    else
        cout<<ans<<endl;

    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;string s[n];
	for(int i=0;i<n;i++)cin>>s[i];
	sort(s,s+n);cout<<s[n/2];
}
*/
