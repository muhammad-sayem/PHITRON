#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){

        string str;
        string x;

        cin >> str >> x;

        int len = x.size();

        stringstream ss(str);
        string word;

        while(str.find(x) != -1){
            str.replace(str.find(x), len, "$");
        }
        cout << str << endl;
    }

    return 0;
}