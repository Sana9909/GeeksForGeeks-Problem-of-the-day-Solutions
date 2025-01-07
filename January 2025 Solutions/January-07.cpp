// Pair with given sum in a sorted array
// https://www.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array4940/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int count=0;
        int n=arr.size();
        int left=0;
        int right=n-1;
        while(left<right){
            long int sum=arr[left]+arr[right];
            if(sum<target){
                left++;
            }
            else if(sum>target){
                right--;
            }
            else{
                int e1,e2,c1,c2;
                e1=arr[left];
                e2=arr[right];
                c1=0;
                c2=0;
                while(e1==arr[left] && left<=right){
                    left++;
                    c1++;
                }
                while(e2==arr[right] && left<=right){
                    right--;
                    c2++;
                }
                if(e1==e2){
                    count+=c1*(c1-1)/2;
                }
                else{
                    count+=c1*c2;
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
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends