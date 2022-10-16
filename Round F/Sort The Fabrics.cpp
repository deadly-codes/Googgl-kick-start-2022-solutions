#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x=t;
    while(t--){
        int n;
        cin >> n;
        string st;
        int d,u;
        vector<pair<string,int>>v1;
        vector<pair<int,int>>v2;
        for(int i=0;i<n;i++){
            cin>>st>>d>>u;
            v1.push_back(make_pair(st,u));
            v2.push_back(make_pair(d,u));
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int y=0;
        for(int i=0;i<n;i++){
            if (v1[i].second==v2[i].second){
                y++;
            }
        }
        cout<<"Case #"<<x-t<<":"<<" "<<y<<endl;
    }
    return 0;
}
