#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;
    cin>>n;
    lli a[n],b[n];
    lli maxm=INT_MIN, minm=INT_MAX;
    for(lli i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        maxm=max(b[i],maxm);
        minm=min(a[i],minm);
    }
    //cout<<maxm<<" "<<minm;
    lli ans=-1;
    for(lli i=0;i<n;i++)
    {
        if(a[i]==minm && b[i]==maxm)
            ans=i+1;
    }
    cout<<ans<<endl;
}
