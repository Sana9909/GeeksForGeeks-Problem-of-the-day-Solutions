// Sum Pair closest to target
// https://www.geeksforgeeks.org/problems/pair-in-array-whose-sum-is-closest-to-x1124/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int left=0;
        int right=n-1;
        int a,b;
        if(n==1){
            return {};
        }
        long int maxAbsDiff=INT_MAX;
        while(left<right){
            long int sum=arr[left]+arr[right];
            if(abs(target-sum)<maxAbsDiff){
                a=left;
                b=right;
                maxAbsDiff=abs(target-sum);
            }
            if(sum<target){
                left++;
            }
            else if(sum>target){
                right--;
            }
            else{
                return {arr[left],arr[right]};
            }
        }
        return {arr[a],arr[b]};
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends