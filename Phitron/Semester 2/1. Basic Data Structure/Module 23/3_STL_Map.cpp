#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;

    mp["Shakib"] = 75;      // O(logN), n songkhok er jonno O(NlogN) //
    mp["Mashrafee"] = 2;
    mp["Tamim"] = 28;

    // mp.insert({"Shakib Al Hasan", 75});
    // mp.insert({"Tamim Iqbal", 28});
    // mp.insert({"Mashrafee Bin Mortaza", 2});
    // mp.insert({"Akib", 0});

    // cout << mp["Tamim Iqbal"] << endl;      // 28 (jodi key te emon kisu diye cout kora hoy jeta map e nai tahole output 0 dey) //

    // if(mp.count("Shakib")){
    //     cout << "Present" << endl;
    // }
    // else{
    //     cout << "Not Present" << endl;
    // }

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;      // O(logN), n songkhok er jonno O(NlogN) //
    }
    
    return 0;
}