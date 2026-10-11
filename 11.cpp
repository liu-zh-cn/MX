#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    char c;
    long long num=0;
    while(cin>>c&&c!='@'){
        if(c>='0'&&c<='9'){
            num=num*10+c-'0';
        }
        else if(c=='.'){
            s.push(num);
            num=0;
        }
        else if(c=='+'||c=='-'||c=='*'||c=='/'){
            long long b=s.top();
            s.pop();
            long long a=s.top();
            s.pop();
            if(c=='+'){
                s.push(a+b);
            }
            else if(c=='-'){
                s.push(a-b);
            }
            else if(c=='*'){
                s.push(a*b);
            }
            else if(c=='/'){
                s.push(a/b);
            }
        }
    }
    cout<<s.top()<<endl;
    return 0;
}