#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string a;
    cin>>a;
    ll u[30]={0};
    ll l[30]={0};
    int uc=0;
    int lc=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>='a'&& a[i]<='z')
          lc++;
        else if(a[i]>='A'&& a[i]<='Z')
          uc++;
    }
    if(lc>=uc){
       for(int i=0;i<a.size();i++){
        if(a[i]>='A'&& a[i]<='Z')
         a[i]=a[i]+32;
    } }
    else if(lc<uc){
        for(int i=0;i<a.size();i++){
        if(a[i]>='a'&& a[i]<='z')
          a[i]=a[i]-32;
        
    }
    }
    for(int i=0;i<a.size();i++)
    cout<<a[i];
    cout<<endl;

    }