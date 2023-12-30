#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    int a1[n+2]={0};
    for(int i=1;i<=p;i++){
        int x;
        cin>>x;
        a1[x]=1;
    }
    int q;
    cin>>q;
    
    for(int i=1;i<=q;i++){
        int y;
        cin>>y;
        a1[y]=1;
    }
    int flag=0;
    for(int i=1;i<=n;i++){
        if(a1[i]==0){
        flag=1;
        //break;
        }
    }
    if(flag==0)
    cout<<"I become the guy."<<endl;
    else
    cout<<"Oh, my keyboard!"<<endl;

}