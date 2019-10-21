    //    Shooting codeforces
    //https://codeforces.com/contest/1216/problem/B
    
    #include<bits/stdc++.h>
    using namespace std;
    bool cmp(pair<long int,int>p1,pair<long int,int>p2){
        return p1.first>p2.first;
    }
     
    int main(){
        int n;
        cin>>n;
        vector<pair<long int ,int>> v;
        
        for(int i=1;i<=n;i++){
            long int a;
            cin>>a;
            v.push_back(make_pair(a,i));
        }
        
        sort(v.begin(),v.end(),cmp);
        long int ans=0;
        for(int i=1;i<n;i++){
            ans+=((i)*v[i].first)+1;
        }
        cout<<ans+1<<endl;
        
        for(int i=0;i<n;i++){
            cout<<v[i].second<<" ";
        }
        cout<<endl;
        
        
        
        
    }
