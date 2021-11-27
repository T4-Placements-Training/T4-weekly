//geeksforgeeks
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int start = 0;
        long long sum = 0; 
        vector<int> v;  
        for (int i=0;i<n;i++) {
            sum += arr[i]; 
            while (sum > s) {
                sum -= arr[start];
                start++;
            }
            if (sum == s) {
                v.push_back(start+1);
                v.push_back(i+1);
                return v; 
            }
        }
        v.push_back(-1);
        return v;
    }
};