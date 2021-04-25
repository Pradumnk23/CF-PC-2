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
    lli n,m,s1=0,s2=0;
    cin>>n>>m;
    lli a[m],b[m];
    for(lli i=0; i<m; i++)
        {cin>>a[i];b[i]=a[i];}
    sort(a,a+m);
    sort(b,b+m);
    lli temp=n, i=m-1;
    while(n--)
    {
        s1+=a[i];
        a[i]-=1;
        sort(a,a+m);
    }
    i=0;
    while(temp--)
    {
        s2+=b[i];
        b[i]-=1;
        if(b[i]==0)
            i++;
    }
    cout<<s1<<" "<<s2;
	return 0;
}
