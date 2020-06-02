#include<bits/stdc++.h>
#define ll  long long
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

void wiggleSort(vector<int> &nums) {
        
        vector<int> v = nums;
        int n = nums.size();

        sort(v.begin(),v.end());

        for(int i=0,j=(n)/2,k=n-1;i<n;i++){
            if(i%2==0) nums[i]=v[j--];
            else nums[i]= v[k--];
        }
    }

    int main(){

        int n;
        cin >> n;

        vector<int> v;
        for(int i=0;i<n;i++){
            int data;
            cin >>data;
            v.push_back(data);
        }

        wiggleSort(v);

        for(int i=0;i<n;i++){
            cout << v[i];
        }
    }