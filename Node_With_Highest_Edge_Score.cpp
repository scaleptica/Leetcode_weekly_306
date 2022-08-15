class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n = edges.size();
        int maxi = 0;
        vector<long long> v;
        
        map<long long, long long> m;    //node, sum of nodes that point to it
        for(int i = 0; i<n; i++){
            if(m.find(edges[i])!=m.end()){     //found
                m[edges[i]] = m[edges[i]] + i;
            }else{
                m.insert({edges[i], i});
            }
        }
        
        for(int i = 0; i<m.size(); i++){
            v.push_back(m[i]);
        }
        long long int max = *max_element(v.begin(), v.end());
        int a;
        for(int i = 0; i<v.size(); i++){
            if(v[i]==max){a = i; break;}
        }
        return a;

    }
};
