#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string str2 = str;

    stringstream ss(str);
    stringstream ss2(str2);
    
    string word;
    string word2;
    int cnt = 0, flag = 0;

    while(ss2 >> word2){
        cnt++; 
    }

    while(ss >> word){
        reverse(word.begin(), word.end());
        cout << word; 
        flag++;
        if(flag != cnt) cout << " ";
    }
    
    return 0;
}