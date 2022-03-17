#include <bits/stdc++.h>
using namespace std;
 int calc(int n){
    long int mod=1e9+7;
  int f=2;
  for(int i=1;i<n;i++)
  f=2*(f%mod);
  return f%mod;

}
int main(){
    int n;
    scanf("%d",&n);
    cout<<calc(n);
}