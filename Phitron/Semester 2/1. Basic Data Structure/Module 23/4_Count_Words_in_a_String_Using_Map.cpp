#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    
    string word;
    stringstream ss(sentence);

    map<string, int> mp;

    while(ss >> word){
        mp[word]++;
    }

    // for(auto it = mp.begin(); it != mp.end(); it++){
    //     cout << it->first << " " <<  it->second << endl;
    // }

    cout << mp["good"] << endl;     // je word er count korte chai sei word " " er vitor diye dite hobe //

    return 0;
}