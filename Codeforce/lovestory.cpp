#include<bits/stdc++.h>
using namespace std;
int main(){
    string s[11]="codeforces";
    int a[11]={0};
    int pos;
    for(int i=0;i<10;i++){
        string s1;
        cin>>s1;
        
        if(s[i]!=s1[i]){
            a[++pos]++;
        }

    }
}