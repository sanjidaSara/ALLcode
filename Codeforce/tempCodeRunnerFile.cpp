vector<char>v;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
               if(a[i][j]!='.'){
                v.push_back(a[i][j]);
               }
            }
        }
        for(int i=0;i<v.size();i++)
        v.pop_back();
