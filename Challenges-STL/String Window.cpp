#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<vector<int>>v1(s1.length()+1,vector<int>(250));
    vector<int>v2(250);
    for(int i=1;i<=s1.length();++i){
        v1[i]=v1[i-1];
        //if(s1[i-1]==' ') s1[i-1]=s1[i-1]-' '+'z'+1;
        ++v1[i][s1[i-1]];
    }
    for(int i=1;i<=s2.length();++i){
        //if(s2[i-1]==' ') s2[i-1]=s2[i-1]-' '+'z'+1;
        ++v2[s2[i-1]];
    }
    int ms,me,ans=s1.length()+1,s=1,e=1;
    while(e<=s1.length()){
        bool ok=true;
        for(int i=0;i<250;++i) if(v1[e][i]-v1[s-1][i]<v2[i]) {ok=false; break;}
        if(ok) {if(e-s+1<ans) {ans=e-s+1; ms=s; me=e;}  ++s;}
        else ++e;
    }
    if(ans==s1.length()+1) cout<<"No String";
    else for(int i=ms;i<=me;++i) { cout<<s1[i-1];}
}
