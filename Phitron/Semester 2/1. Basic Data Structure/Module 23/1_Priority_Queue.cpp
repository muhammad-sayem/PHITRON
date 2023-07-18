                                /* Max Heap */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;

    while(true){
        int c;          // command //
        cin >> c;

        if(c == 0){
            int x;
            cin >> x;
            pq.push(x);         // O(logN), N songkhok push korle complexity hoy O(NlogN) //
        }
        else if(c == 1){
            pq.pop();           // O(logN), N songkhok push korle complexity hoy O(NlogN) //
        }
        else if(c == 2){
            cout << pq.top() << endl;           // O(1) //
        }
        else{
            break;
        }
    }
    
    return 0;
}

// ----------------------------------------------------------------------- //

                                /* Min Heap */
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<>> pq;

    while(true){
        int c;          // command //
        cin >> c;

        if(c == 0){
            int x;
            cin >> x;
            pq.push(x);         // O(logN), N songkhok push korle complexity hoy O(NlogN) //
        }
        else if(c == 1){
            pq.pop();           // O(logN), N songkhok push korle complexity hoy O(NlogN) //
        }
        else if(c == 2){
            cout << pq.top() << endl;           // O(1) //
        }
        else{
            break;
        }
    }
    
    return 0;
}
*/