#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>q;
	vector<int> push;
	vector<int> pop;
	stack<int> s;
	for(int i=0;i<q;i++){
		int n;
		cin>>n;
		for(int j=0;j<n;j++){
			int t;
			cin>>t;
			push.push_back(t);
		}
		for(int j=0;j<n;j++){
			int t;
			cin>>t;
			pop.push_back(t);
		}
		for(int j=0;j<n;j++){
			s.push(push[j]);
			while(!s.empty()&&s.top()==pop[j]){
				s.pop();
                
			}
		}
        if(!s.empty()){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
        pop.clear();
        push.clear();
        while(!s.empty()){
            s.pop();
        }
	}
	return 0;
}