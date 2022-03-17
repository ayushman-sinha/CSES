#include <bits/stdc++.h>
using namespace std;

int main(){
   
    int n;
    scanf("%d",&n);
    priority_queue<int>a;
    int tmp;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&tmp);
        a.push(tmp);
    }
    if(a.size()==1)
    {
            if(a.top()==n)
            printf("%d",n-1);
            else
             printf("%d",n);
    }
   else{
    tmp=a.top();
    a.pop();
    if(tmp!=n)
    printf("%d",n);
    while (!a.empty())
    {
        if(tmp-a.top()!=1)
        {

            printf("%d",tmp-1);
            break;
        }
        
        tmp=a.top();
        a.pop();
    }
   }
    
}