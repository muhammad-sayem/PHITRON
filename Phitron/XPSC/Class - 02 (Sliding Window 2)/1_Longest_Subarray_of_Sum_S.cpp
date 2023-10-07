// Find the Longest Subarray (size) from an array of sum S //

#include<bits/stdc++.h>
#define  ll long long
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int s;
    cin >> s;

    i = 0, j = 0;
    int sum = 0, maxx = -1;

    while(j<n){
        sum += a[j];

        while(sum > s){
            sum -= a[i];
            i++;
        }

        if(sum == s){
            maxx = max(maxx, j-i+1);        
            // cout << j-i+1 << " ";
        }
        j++;
    }

    cout << maxx << endl;
    
    return 0;
}