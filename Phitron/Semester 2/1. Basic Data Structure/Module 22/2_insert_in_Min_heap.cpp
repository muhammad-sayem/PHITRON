#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;

    int n, i;
    cin >> n;

    for(i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        
        int cur_ind = v.size()-1;

        while(cur_ind != 0){
        
            int parent_ind = (cur_ind-1)/2;

            if(v[parent_ind] <= v[cur_ind]){
                break;
            }

            else if(v[parent_ind] > v[cur_ind]){
                swap(v[parent_ind], v[cur_ind]);
            }
            cur_ind = parent_ind;

            /*
            if(v[parent_ind] < v[cur_ind]){
                swap(v[parent_ind], v[cur_ind]);
            }
            else{
                break;
            }
            cur_ind = parent_ind;
            */
        }
    }

    for(int val: v){
        cout << val << " ";         // 55 50 45 30 40 42 32 25 20 10 35 //
    }

    return 0;
}