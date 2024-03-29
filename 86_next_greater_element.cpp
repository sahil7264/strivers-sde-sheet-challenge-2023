#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
   stack<int>st;
   vector<int>ans(n,-1);
   for(int i=n-1;i>=0;i--){
       while(!st.empty()){
           if(st.top() > arr[i]){
               ans[i] = st.top();
               break;
           }
           st.pop(); 
       }
       st.push(arr[i]);
   }
   return ans;
}