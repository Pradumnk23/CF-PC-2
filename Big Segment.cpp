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
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a,b,c,d,ans=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(i==0){c=a;d=b;}
        if(a<c){c=a;  ans=-1;}
        if(b>d){d=b; ans=-1;}
        if(a==c && b==d)ans=i+1;
    }
    cout<<ans;
}
*/
