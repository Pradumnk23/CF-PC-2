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
#define MOD                 1000000007

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
    lli n,m;
    cin>>n>>m;
    lli a[n],b[m];
    fn cin>>a[i];
    for(lli i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    lli ans=-1;
	if(2*a[0]<b[0] && a[n-1]>=2*a[0] && a[n-1]<b[0])
            ans=a[n-1];
        else if(2*a[0]<b[0] && a[n-1]<=2*a[0] && a[n-1]<b[0])
            ans=2*a[0];
	
    cout<<ans<<endl;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,b,i,as;
	cin>>n>>m;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	as=max(a[0]*2,a[n-1]);
	while(m--){
		cin>>b;
		if(b<=as)
			as=-1;
	}
	cout<<as<<endl;

}
*/
