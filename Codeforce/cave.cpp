#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int f=-1;
    int a1,b1,c1,z;
    for(int i=0;i<t;i++){
        int x,l,r;
        int a,b,c;
        cin>>x>>l>>r;
        for(a=l;a<b;a++){
            for(b=l+1;b<c;b++){
            for(c=l+2;c<=r;c++){
                    if((a*b*c)==x){
                       a1=a;
                       b1=b;
                       c1=c;
                    }
                    else z=-1;
                }
                
                
             }
            
         
        }  
       
        cout<<a1<<" "<<b1<<" "<<c<<" "<<endl;
        else cout<<"-1"<<endl;  
    }
}