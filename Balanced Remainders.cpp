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
bool isSquare(int x)
{
    int y=sqrt(x);
    return y*y==x;
}
int prime(int a){
	for(lli i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
            return 0;
	}
	return 1;
}
int main()
{
    test()
    {
        lli n;
        cin>>n;
        lli a[n],z=0,o=0,t=0;
        fn
        {
            cin>>a[i];
            if(a[i]%3==0)
                z++;
            else if(a[i]%3==1)
                o++;
            else
                t++;
        }
        cout<<max(z-t,max(o-z,t-o))<<endl;

    }
    return 0;
}
