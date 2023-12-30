#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=n;
    while(k--){
        int t;
        cin>>t;
        vector<int> a;
        for(int i=0;i<t;i++){
            int x;
            cin>>x;
        a.push_back(x);
        }
        vector<int>a1,a2;
        a1=a;
        for(int i=0;i<t-1;i++){
            for(int j=0;j<t-1;j++){
               
                
                if((a[i]+a1[j])>(a[i+1]+a1[j+1])){
                    swap(a1[j],a1[j+1]);
                    a2.push_back(a1[j]);
                    a2.push_back(a1[j+1]);
                }
                else{
                    a2.push_back(a1[j]);
                }
            
            }
            
        }
        for(int i=0;i<t;i++){
            cout<<a2[i]<<" ";
        }

    }
   
}