#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6][6];
    int r,c;
    int count=0;
    int i,j;
    int row=0,col=0;
    for ( i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>a[i][j];
        //      if(a[i][j]!=0){
        //     r=i;
        //     c=j;
        //    // break;
        // }
    }
    }
     for ( i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            
             if(a[i][j]!=0){
            r=i;
            c=j;
           // break;
        }
    }
    }
   if(r!=3){
    if(r>3)
    row=r-3;
    else
    row=3-r;
   }
   else row=0;
  
   if(c!=3){
    if(c>3)
    col=c-3;
    else 
    col=3-c;
   }
   else col=0;
    
     cout<<row+col<<endl;

}
