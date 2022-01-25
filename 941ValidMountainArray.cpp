class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        int pivot;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]) return false;
            else if(arr[i]>arr[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot==0|| pivot==arr.size()-1) return false;
        for(int i=pivot+1;i<arr.size()-1;i++){
            if(arr[i]<=arr[i+1]) return false;
        }
        return true;
    }
};
