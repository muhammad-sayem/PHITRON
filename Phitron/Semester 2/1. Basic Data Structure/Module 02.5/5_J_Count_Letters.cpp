#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    vector<int> v(26, 0);
    int i;
    while(scanf("%c", &ch) != EOF){
        int val = ch-'a';
        v[val]++;
    }

    for(i=0; i<26; i++){
        if(v[i] != 0){
            printf("%c : %d\n", i+'a', v[i]);
        }
    }
    
    return 0;
}