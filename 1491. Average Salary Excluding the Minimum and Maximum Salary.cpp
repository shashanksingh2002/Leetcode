class Solution {
public:
    double average(vector<int>& arr) {
    int n=arr.size();
    int &min = *min_element(arr.begin(),arr.end());
    int &max = *max_element(arr.begin(),arr.end());
    min=0;
    max=0;
    double sum=0;
    for(int i=0;i<n;i++){
       sum+=(double)arr[i];
    }
      return sum/((double)(n-2));
    }
};
