#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;

    vector<int> v(n);

    for(i=0; i<n; i++){
        cin >> v[i];
        if(v[i]>0) v[i] = 1;
        if(v[i]<0) v[i] = 2;
    }

    for(int val: v){
        cout << val << " ";
    }

    return 0;
}