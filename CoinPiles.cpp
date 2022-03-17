#include <bits/stdc++.h>
using namespace std;
void calc(int x,int y){
    while(x>0&&y>0)
    {
      
         if(x>=y){
            x-=2;
            y-=1;
        }
        else{
            y-=2;
            x-=1;
        }
    }
    if(x==0&&y==0)
    printf("YES\n");
    else
    printf("NO\n");
}
int main(){
    int t,x,y;
    scanf("%d",&t);
    while(t--){
      scanf("%d%d",&x,&y);
       calc(x,y);
    }
    
}