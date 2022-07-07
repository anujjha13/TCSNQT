https://studytosuccess.in/wp-content/uploads/2022/06/TCS-NQT-Solved-Paper-13th-Sept-2021-Slot-1.pdf






#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        vector<int> en,le;
        int i=0;
        int mx=0;
        while(i<N){
            int temp;
            cin>>temp;
            en.push_back(temp);
            i++;
        }
        i=0;
        while(i<N){
            int temp;
            cin>>temp;
            le.push_back(temp);
            i++;
        }
        int sum=0;
        for(i=0;i<N;i++){
            
            sum+=en[i];
            sum-=le[i];
            mx=max(mx,sum);
        }
        
        cout<<mx<<endl;
    }

    return 0;
}
