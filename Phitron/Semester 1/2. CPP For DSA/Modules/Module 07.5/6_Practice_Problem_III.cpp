#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    string s;
    cin >> s;

    int cnt = 0;

    while(str.find(s) != -1){
        str.replace(str.find(s),s.size(), "XXYY");
        cnt++;
    }
    
    cout << cnt << endl;

    return 0;
}

// ----------------------------------------------------------------------- //

// Masud's Code //

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0;
    string s, x;
    getline(cin, s);
    cin >> x;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        if (word == x)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
*/