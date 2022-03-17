#include <bits/stdc++.h>
using namespace std;
void calc(long long int n){
    if(n<=1)
    {
        printf("1");
        return;
    }
    printf("%lld ",n);
    if(n%2==0)
    calc(n/2);
   else
    calc((n*3) +1);
}

int main(){
    long long int n;
    scanf("%lld",&n);
    calc(n);
return 0;
}