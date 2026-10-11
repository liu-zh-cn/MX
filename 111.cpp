#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<int> v;
    stack<int> num;
    cin>>n;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    stack<int> s;
    int ans=0;
    for(int i=0LL;i<n;i++){
        while(!s.empty()&&s.top()<v[i]){
            s.pop();
            ans+=num.top();
            num.pop();
        }
        if(s.empty()){
            s.push(v[i]);
            num.push(1);
        }
        else{
            if(v[i]!=s.top()){
                ans++;
                s.push(v[i]);
                num.push(1);
            }
            else if(s.size()==1){
                ans+=num.top();
                int t=num.top();
                num.pop();
                num.push(t+1);
            }
            else{
                ans+=num.top();
                int t=num.top();
                num.pop();
                num.push(t+1);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}