#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;

    int n, i;
    cin >> n;

    for(i=1; i<=n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    cout << "Size: " << q.size() << endl;

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}