#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    string longest_common_prefix(vector<string>& words) {
        //Write your code here...
        int n=words.size();
        int k=0;
        if(n==0) return "";
        if(n==1) return words[0];
        while(true){
            for(int i=1;i<n;i++){
                if ((words[i].size()==k)|| (k==words[0].size())){
                    return words[0].substr(0,k);
                } 
                if(words[i][k]!=words[0][k]){
                return words[0].substr(0,k);
                } 
            }
               k++;
        }
        
    }

};
