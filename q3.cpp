#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void nonrepeating(string s){
    queue<int>q;
    int fre[26]={0};
    for(int i=0;i<s.length();i++){
        char c=s[i];
        fre[c-'a']++;
        q.push(c);

        while(!q.empty()){
            char fc=q.front();
            if(fre[fc-'a']>1 )
                q.pop();
            else{
                cout<<fc<<" ";
                break;
            }
        }
        if(q.empty()){
            cout<<"# ";
        }

    }
}
// bank robber problem leetcode 134
// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int deficiet=0;
//         int balance =0;
//         int start=0;

//         for(int i=0;i<gas.size();i++){
//             balance+=gas[i]-cost[i];

//             if(balance<0){
//                 deficiet+=abs(balance);
//                 start=i+1;
//                 balance =0;
//             }
//         }
//         if(balance-deficiet>=0)
//             return start;
//         else 
//             return -1;
//     }
// };

// sliding window maximum 

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         // solving the first window
//         deque<int>q;
//         vector<int>ans;

//         // solving for first case 
//         for(int i=0;i<k;i++){
//             int ele=nums[i];
//             // queue ke andar check karo agar current ele se chota 
//             // element pada hai to pop kardo 
//             while(!q.empty()&& ele>nums[q.back()])
//                 q.pop_back();
//             // finally current element ko push kardo
//             q.push_back(i);
//         }

//         // remaining window 
//         for(int i=k;i<nums.size();i++){
//             if(!q.empty()){
//                 ans.push_back(nums[q.front()]);
//             }
//             // removing 
//             // 1 out of range 
//             if(!q.empty()&& i- q.front()>=k){
//                 q.pop_front();
//             }
//             // chota elements ko pop karenge 
//             int ele=nums[i];
//             while(!q.empty()&& ele>nums[q.back()])
//                 q.pop_back();

//             // addition
//             q.push_back(i);

//         }
//         // last window ka ans push karo 
//         ans.push_back(nums[q.front()]);

//         return ans;
//     }
// };


int main(){
    // string s="ababc";
    // nonrepeating(s);

}