#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.length();i++){
            ans=ans^s[i];
        }
        
        cout<<char(ans);
    }

    return 0;
}
