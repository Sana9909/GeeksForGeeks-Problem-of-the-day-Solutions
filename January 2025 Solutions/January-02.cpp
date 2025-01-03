// Subarrays with sum K
// https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int currSum=0;
        int count=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            currSum+=arr[i];
            if(currSum==k){
                count++;
            }
            if(mp.find(currSum-k)!=mp.end()){
                count+=mp[currSum-k];
            }
            mp[currSum]++;
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

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends