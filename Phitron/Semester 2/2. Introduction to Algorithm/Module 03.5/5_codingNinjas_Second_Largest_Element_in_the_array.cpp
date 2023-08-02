#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &v)
{
    sort(v.begin(), v.end());
    bool flag = false;
    int res;

    for(int i=v.size()-2; i>=0; i--){
        if(v[i] != v[i+1]){
            flag = true;
            res = v[i];
            break;
        }
    }

    if(flag) return res;
    else return -1;
}

// -------------------------------------------------------------------------- //

