#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// Repalce ///
    /*
    vector<int> v = {1, 2, 2, 4, 5, 3, 2, 4, 2, 4, 3, 2};

    replace(v.begin(), v.end(), 2, 77);     // jekhan theke replace shuru korte chai tar pointer, jekhane shesh korte chai tar 1 ghor porer pointer, kon value taake replace koret chai shei value, kon value diye replace korte chai shei value //

    for(int x: v){
        cout << x << " ";
    }
    */

    /// Find /// 

    vector<int> v = {1, 2, 2, 4, 5, 3, 2, 4, 2, 4, 3, 2};
    auto it = find(v.begin(), v.end(), 3);

    if(it == v.end()) cout << "Not Found" << endl;      // Jodi value khuje na paay tahole it giye point korbe last index er porer index e //
    else cout << "Found" << endl;

    return 0;
}