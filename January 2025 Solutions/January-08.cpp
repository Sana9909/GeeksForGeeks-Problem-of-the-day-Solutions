// Count the number of possible triangles
// https://www.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int left=0;
        int right=n-1;
        int count=0;
        for(int i=n-1;i>=0;i--){
            left=0;
            right=i-1;
            while(left<right){
                if(arr[left]+arr[right]>arr[i]){
                    count+=right-left;
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends