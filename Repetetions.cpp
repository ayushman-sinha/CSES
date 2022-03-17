#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0,k=0;char a=s[0];
    for(int i=0;i<s.length();i++){
        if(a==s[i])
        k++;
        else{        
        c=max(c,k);
        k=1;
        a=s[i];
        }
    }
    cout<<max(c,k);
}