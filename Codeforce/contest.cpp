// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int p;
//         cin>>p;
//         int n=p;
//         while(p--){
//             int a[n+1],b[n+1];
//             int k1=0;
//             for(int i=1;i<=n;i++){
//                 cin>>a[i]>>b[i];
//             }
//             int k=0;
//             for(int i=1;i<=n;i++){
//                 if(a[i]>10){
//                     k=i;
//                     b[k]=-1;
//                 }
//             }
//             int s=0;
//             for(int i=1;i<=n;i++){
//                 if(s<b[i]){
//                     s=b[i];
//                     k1=i;
//                 }
//             }
        
//             cout<<k1<<endl;
//         }
//     }
// }
// 
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(){
//     ios_base::sync_with_stdio(false);
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m,k,H;
//         cin>>n>>m>>k>>H;
//         int h[n+1];
//         int count=0;
//         for(int i=0;i<n;i++)
//         cin>>h[i];
//         int H1,h1;
//         for(int i=0;i<n;i++){
//             H1=H+k;
//             h1=h[i]+k;
//             if(H1>h1){
//                 if((H1-h1)<=(m-1)*k){
//                 if(((H1-h1)%k==0)&((H1-h1)/k<=m*k))
//                 count++;
//             } 
//             }
//             else if(H1<h1){
//                 if((h1-H1)<=(m-1)*k){
//                 if(((h1-H1)%k==0)&((h1-H1)/k<=m*k))
//                 count++;
//             }
//             }

//         }
//         cout<<count<<endl;

//     }

// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(){
//     ios_base::sync_with_stdio(false);
//         int t;
//         cin>>t;
//         while(t--){
//             int n;
//             cin>>n;
//             vector<int >a,b;
            
//             for(int i=0;i<n;i++){
//             int x; cin>>x;
//             a.push_back(x);
//             }
//             b=a;
//             sort(b.begin(),b.end());
//             int flag=1;

//             for(int i=0;i<n;i++){
//                 int x,y;
//                 x=a[i];
//                 y=b[i];
//                 if(x%2!=y%2)
//                 flag=0;
            
//             }
//             if(flag) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
            
            
//         }
//         }
// #include<bits/stdc++.h>
// #define ll long long
// #define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// using namespace std;
// int main(){
//     fastio;
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int k=n;
//         int pos=0;
//         vector<int>a,b;
//         while(k--){
            
//             int x,y;
//             cin>>x>>y;
//             a.push_back(x);
//             if(x>10){
                
//                 b.push_back(-1);
//             }
//             else{
//                 b.push_back(y);
//             }
//         }
//         int s=b[0];
//             for(int i=0;i<n;i++){
//                  if(s<=b[i]){
//                     s=b[i];
//                     pos=i+1;
//                  }
//             }
//         cout<<pos<<endl;
//     }
// }
// #include<bits/stdc++.h>
// #define ll long long
// #define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         for(int i=0;i<8;i++){
//             string x;
//             cin>>x;
//             for(int i=0;i<8;i++){
//                 if(x[i]>='a'& x[i]<='z')
//                 s.push_back(x[i]);
//             }
//         }
//         for(auto it:s){
//           cout<<it<<endl;
//         }
        
       
//     }
// }
#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int r=0;
        int a[n+1];
        vector<int>v;
        for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==i)
        v.push_back(a[i]);
        }
        int s=v.size();
        while(s--){
            for(int i=0;i<s;i++){
            swap(v[i],v[i+1]);
            r++;
            }
        }
        cout<<r<<endl;
    }
}