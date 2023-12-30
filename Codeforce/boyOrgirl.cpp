#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s;
    cin>>s;
    int l[30]={0};
    ll pos;
    int sum=0;
    for(int i=0;i<s.size();i++){
        pos=s[i]-'a';
        l[++pos]++;
        //cout<<pos<<" "<<l[pos]<<endl;
    }
    for(int i=0;i<27;i++){
        if(l[i]!=0)
        sum=sum+1;
    }
    if(sum%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
}