#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     int b,c,h;
    //     cin>>b>>c>>h;
    //     if(b>=c+h){
    //         cout<<2*(c+h)+1<<endl;
    //     }
    //     else if(b<c+h){
    //         cout<<2*b-1<<endl;
    //     }
        
//}
int t;
cin>>t;
while(t--){
    string a,b;
    int c=0;
    int sum=0;
    a="abc";
    cin>>b;
    int p=-1,curr=-1;
    int f=0;
    for(int i=0;i<3;i++){
        if(a[i]!=b[i]){
        c++;
        }
    }

    if(c>2)f=-1;
    
    if(f=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}


}