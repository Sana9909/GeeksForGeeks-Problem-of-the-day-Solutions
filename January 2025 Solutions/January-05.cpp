// Count Pairs whose sum is less than target
// https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-less-than-target/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int left=0;
        int right=n-1;
        int count=0;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum<target){
                count+=right-left;
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends