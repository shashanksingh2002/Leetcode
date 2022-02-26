class Solution {
public:
    void makeHeap(vector<int> &heap){
        if(heap.size()==2) return;
         int idx=heap.size()-1;
         int parent=idx/2;
         while(idx>1&&heap[parent]<heap[idx]){
             swap(heap[parent],heap[idx]);
             idx=parent;
             parent/=2;
         }
    }
     int heapify(vector<int> &heap){
        if(heap.size()==2){
            return heap[1];
        }
        if(heap.size()==3){
            if(heap[1]>heap[2]){
                swap(heap[1],heap[2]);
                int ans=heap[2];
                heap.pop_back();
                return ans;
            }
            else{
                int ans=heap[2];
                heap.pop_back();
                return ans;
            }
        }
        else{
        int size=heap.size()-1;
        swap(heap[1],heap[size]);
        int small=heap[size];
        heap.pop_back();
        int idx=1;
        bool check=false;
        while((idx*2)+1<heap.size()&&(heap[idx]<heap[idx*2]||heap[idx]<heap[(idx*2)+1])){
            check=true;
            if(heap[idx*2]>heap[(idx*2)+1]){
                swap(heap[idx],heap[idx*2]);
                idx=idx*2;
            }else{
                swap(heap[idx],heap[(idx*2)+1]);
                idx=(idx*2)+1;
            }
    
        }
        return small;
        }
        return -1;
        
    }
    int findKthLargest(vector<int>& nums, int k) {
         vector<int> heap;
         heap.push_back(-1);
         for(int i=0;i<nums.size();i++){
             heap.push_back(nums[i]);
             makeHeap(heap);
         }
         int ans=-1;
         while(k>0){
             ans=heapify(heap);
             --k;
         }
         return ans;
    }
};
