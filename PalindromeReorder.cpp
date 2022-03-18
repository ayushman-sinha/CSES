#include <bits/stdc++.h>
using namespace std;
class prg
{
    public:


void calc(string s){
    vector<int>a(26,0);
    for(int i=0;i<s.length();i++)
    a[s[i]-65]++;
    // for(auto i:a)
    // cout<<i<<" ";
    
    int odd=0;char t1='*',t2='*';
   for(int i=0;i<26;i++){
       if(a[i]%2==1){
       odd++;
       if(a[i]==1)
       t1=(char)(i+65);
       else
       t2=(char)(i+65);
       }
   }
   if(odd>1)
   {
       cout<<"NO SOLUTION";
       return;
   }
   string ans="";
     for(int i=0;i<26;i++){
         if(a[i]!=0){
            string str(a[i]/2,(char)i+65);
            //cout<<str<<" ";
            ans+=str;
            if(a[i]%2!=0)
            a[i]/=2;
            else
            a[i]-=a[i]/2;
         }
     }
     //cout<<ans<<" ";
     if(t1!='*')
     ans.push_back(t1);
     if(t2!='*')
      ans.push_back(t2);
           
           for(int i=25;i>=0;i--){
                   if(i+65==t1)
                   a[i]=0;                  
                   else{
                      string str(a[i],(char)i+65);
                     ans+=str;
                     a[i]=0;
                   }
               
           }
          
           cout<<ans;
}
};
int main(){
    string s;
    cin>>s;
    prg a1;
    a1.calc(s);
}