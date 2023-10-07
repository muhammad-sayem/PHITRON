// Print the first negative element from each subarray of size K //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n+5];
 
    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int k;
    cin >> k;

    i =0 ;
    j = 0;

    queue<int> q;

    while(j<n){
        if(a[j] < 0){
            q.push(a[j]);
        }

        if(j >= k-1){
            if(!q.empty()){
                cout << q.front() << " ";
            }
            else{
                cout << 0 << " ";
            }

            if(a[i] < 0){
                q.pop();
            }
            i++;            // i always samne agabe, shudhu a[i] negative hole queue theke pop korbe //
        }

        j++;

    }
    
    return 0;
}