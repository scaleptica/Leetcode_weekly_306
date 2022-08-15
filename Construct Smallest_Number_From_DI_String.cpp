class Solution {
public:
    string smallestNumber(string pattern) {
        string ans = "";
        int n = pattern.length();
        vector<string> v;
        string s = "";
        for(int i = 1; i<=n+1; i++){
            s.push_back(i + '0');
        }
        
        do{
            v.push_back(s);
        }while(next_permutation(s.begin(), s.end()));
        
        for(string s : v){
            int c = 0;
            for(int i = 0; i<n; i++){
                if(pattern[i]=='I' && s[i]<s[i+1]){c++; continue;}
                else if(pattern[i]=='D' && s[i]>s[i+1]){c++; continue;}
                else{break;}
            }
            if(c==n){
                for(int i = 0; i<s.length(); i++){
                    ans = ans + s[i];
                }
                break;
            }
        } 
        return ans;
    }
};
