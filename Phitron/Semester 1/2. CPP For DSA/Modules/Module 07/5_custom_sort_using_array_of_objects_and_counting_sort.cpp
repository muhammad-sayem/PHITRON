#include<bits/stdc++.h>
using namespace std;

class CustomSort
{
    public:
        char ch;
        int cnt;
};

bool cmp(CustomSort a, CustomSort b){
    if(a.cnt > b.cnt) return true;
    else return false;
}

int main()
{
    int n;
    cin >> n;

    CustomSort freq[26];
    int i, j;

    for(i=0; i<26; i++){
        freq[i].ch = i+'a';             // freq[i].ch = i+97; is also valid //
        freq[i].cnt = 0;
    }

    for(i=0; i<n; i++){
        char chh;
        cin >> chh;
        freq[chh-'a'].cnt++;
    }

    sort(freq, freq+26, cmp);

    for(i=0; i<26; i++){
        if(freq[i].cnt > 0){
            for(j=1; j<=freq[i].cnt; j++){
                cout << freq[i].ch;
            }
        }
    }
    
    return 0;
}