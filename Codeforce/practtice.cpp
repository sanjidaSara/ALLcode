#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main(){
    //fastio;
    // string s;
    // cin>>s;
    // int a[29]={0};
    // int r=0;
    // for(int i=0;i<s.length();i++){
    //     if(s[i]>='a'&&s[i]<='z'){
    //         int k=s[i]-97;4
    //         a[k]++;
    //     }
        
    // }
    // for(int i=0;i<26;i++){
    //     if(a[i]==1)
    //     r++;
    // }
    // cout<<r<<endl;
    int t;
    cin>>t;
    while(t--){
        int n;
        int a[n+1];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int min=a[0],p;
        for(int i=0;i<n;i++){
            if(min>a[i])
            min=a[i];
            p=i;
        }
        a[p]++;
        int pro=1;
        for(int i=0;i<n;i++){
           pro=pro*a[i];
        }
        cout<<pro<<endl;
    }

    
}