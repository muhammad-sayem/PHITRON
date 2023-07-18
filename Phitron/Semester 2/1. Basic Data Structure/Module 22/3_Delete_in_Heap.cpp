#include<bits/stdc++.h>
using namespace std;

void insertHeap(vector<int> &v, int x){

    v.push_back(x);
    int cur_ind = v.size()-1;
    
    while(cur_ind != 0){
        
            int parent_ind = (cur_ind-1)/2;

            if(v[parent_ind] >= v[cur_ind]){
                break;
            }

            else if(v[parent_ind] < v[cur_ind]){        // child index er value boro holei swap hoy //
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

int main()
{

    
    return 0;
}