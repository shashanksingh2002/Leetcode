class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> umap;
        for(int i=0;i<tasks.size();++i){
            umap[tasks[i]]++;
        }
        int count=0;
        for(auto i: umap){
            if(i.second == 1) return -1;
            else if(i.second == 2) count++;
            else if(i.second%3==0) count+=(i.second/3);
            else count+=(i.second/3)+1;
        }
        return count;
    }
};
