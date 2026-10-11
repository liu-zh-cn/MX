#include <bits/stdc++.h>
using namespace std;
int A(int n,int m){
    m=min(m,n-m);
    int a=1;
    for(int i=0;i<m;i++){
        a=a*(n-i)/(i+1);
    }
    return a;
}
int C(int n,int m){
    m=min(m,n-m);
    int x=A(n,m);
    int y=A(m,m);
    return x/y;
}
int main(){
    
    return 0;
}