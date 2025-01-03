// Count Subarrays with given XOR
// https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        map<int,int> mp;
        int n=arr.size();
        int currXOR=0;
        int count=0;
        for(int i=0;i<n;i++){
            currXOR=currXOR^arr[i];
            int t=currXOR^k;
            if(currXOR==k){
                count++;
            }
            if(mp.find(t)!=mp.end()){
                count+=mp[t];
                
            }
            mp[currXOR]++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input); // Read the whole line for the array

        stringstream ss(input);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num); // Push numbers into the vector
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after k

        Solution obj;
        cout << obj.subarrayXor(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends