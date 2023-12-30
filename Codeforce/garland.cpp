#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    int count=1;
    char k;
    char l[5]={0};
    for(int i=0;i<t;i++){
        cin>>s;
       if(i==0){
       l[i]=1;
        count++;
        k=s[i];
       }
       if(k!=s[i])

    

    }
    if(count>1)
    cout<<count<<endl;
    else 
    cout<<"-1"<<endl;
    count=1;
}