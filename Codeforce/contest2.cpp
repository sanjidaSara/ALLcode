#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,q;
        cin>>n>>q;
        ll a[n+2];
        for(int j=1;j<=n;j++){
            cin>>a[j];
        }
        int l,r,k;
        ll sum=0;
        for(int k=1;k<=q;k++){
            cin>>l>>r>>k;
        
        for(int s=l;s<=r;s++){
            a[s]=k;
        }
        
        for(int i=1;i<=n;i++){
            sum=sum+a[i];
        }
        }
        if(sum%2!=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}