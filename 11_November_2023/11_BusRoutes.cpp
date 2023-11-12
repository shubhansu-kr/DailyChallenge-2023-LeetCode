// https://leetcode.com/problems/bus-routes/?envType=daily-question&envId=2023-11-12

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    using int2=pair<int, int>;
    int n;
    vector<vector<int>> adj;

    bool has_stop(const vector<int>& route, int x){// route is sorted
        int i=lower_bound(route.begin(), route.end(), x)-route.begin();
        return (i==route.size()||route[i]!=x)?0:1;
    }
    bool has_intersection(const vector<int>& X, const vector<int>& Y) {
        int i=0, j=0;
        #pragma unroll
        while(i<X.size() && j<Y.size()){
            if (X[i]==Y[j]) return 1;
            else if (X[i]<Y[j]) i++;
            else j++;
        }
        return 0;
    }

    void build_adj(vector<vector<int>>& routes) {
        adj.resize(n);
        #pragma unroll
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if (has_intersection(routes[i], routes[j])){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
    }
    vector<bool> isTarget;
    void source_target(int source, int target, auto& pq, vector<int>&  dist, vector<vector<int>>& routes) 
    {
        isTarget.assign(n, 0);
        #pragma unroll
        for(int i = 0; i < n; i++){
            if (has_stop(routes[i], source)){
                pq.emplace(1, i);
                dist[i]=1;
            }
            if (has_stop(routes[i], target))
                isTarget[i] = 1;
        }
    }

    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) 
    {
        if (source==target) return 0;//edge case
        n = routes.size();
        #pragma unroll
        for (auto& r:routes)
            sort(r.begin(), r.end());
      
        build_adj(routes);
    //    print(adj);

        priority_queue<int2, vector<int2>, greater<int2>> pq;//minHeap
        vector<int> dist(n, n+1);
        source_target(source, target, pq, dist, routes);

        while(!pq.empty()){
            auto [d, x] = pq.top();
        //    cout<<x<<" d="<<d<<endl;
            pq.pop();
            if (isTarget[x]){
                return d;
            }
            #pragma unroll
            for(int y: adj[x]){
                if(dist[y] > d + 1){
                    dist[y] = d + 1;
                    pq.emplace(d+1, y);
                }
            }
        }
        return -1;
    }
};
int main () {
    
    return 0;
}