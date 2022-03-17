#include <bits/stdc++.h>
using namespace std;
int calc(int n){
    int c=0;
    while(n/5){
        c+=n/5;
        n/=5;
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    cout<<calc(n);
}