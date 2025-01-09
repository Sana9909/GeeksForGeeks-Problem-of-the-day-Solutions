// Indexes of Subarray Sum
// https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        long long int currSum=0;
        int left=0;
        for(int i=0;i<n;i++){
            currSum+=arr[i];
            while(currSum>target){
                currSum=currSum-arr[left];
                left++;
            }
            if(currSum==target){
                return {left+1,i+1};
            }
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends