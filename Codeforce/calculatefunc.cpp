#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll n;
cin>>n;
ll f=0;
for(int i=1;i<=n;i++){
    f=f+(pow(-1,i)*i);
}
cout<<f<<endl;
}