#include <bits/stdc++.h>
using namespace std;
set<string>ans;
void calc(string s,int j){
if(j==s.length())
{
    //cout<<s<<" ";
    ans.insert(s);
    return;
}
for(int i=j;i<s.length();i++)
{
    
    swap(s[i],s[j]);
    calc(s,j+1);
     swap(s[i],s[j]);
}
}
int main(){
    string s;
    cin>>s;
    calc(s,0);
    printf("%d\n",ans.size());
    for(auto i:ans)
    cout<<i<<"\n";
}