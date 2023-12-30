#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    ll n;
    int m=0;
    
    for(int i=1;i<=t;i++){
        cin>>n;
        int a[41];
        int x;
        for(int j=1;j<=40;j++){
        
            if((2*j+1)>=n){
                x=2*j+1;
                a[j]=2;
                m++;
                break;
            }
            else if((2*j-1)<=n){
                x=2*j-1;
                a[j]=2;
                m++;
                break;
            }
        }
    }
}