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
    lli n,cnt=0;
    cin>>n;
    lli a[n];
    fn cin>>a[i];
    sort(a,a+n);
    for(lli i=0; i<n/3; i++)
    {
        lli A=a[i], B=a[i+n/3], C=a[i+(2*n)/3];
        if(A==B || B==C || (B%A!=0) || C%B!=0)
            cnt=1;
    }
    if(cnt==1)
        cout<<-1<<endl;
    else
    {
        for(lli i=0; i<n/3; i++)
            cout<<a[i]<<" "<<a[i+n/3]<<" "<<a[i+(2*n)/3]<<endl;
    }
	return 0;
}