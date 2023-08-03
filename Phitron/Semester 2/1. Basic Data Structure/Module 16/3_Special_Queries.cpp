#include<bits/stdc++.h>
using namespace std;
int main()
{

    int Q;
    cin >> Q;
    queue<string> q;

    while(Q--){
        int x;
        cin >> x;
        if(x == 0){
            string str;
            cin >> str;
            q.push(str);
        }
        else{
            if(q.empty()){
                cout << "Invalid" << endl;
            }
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}