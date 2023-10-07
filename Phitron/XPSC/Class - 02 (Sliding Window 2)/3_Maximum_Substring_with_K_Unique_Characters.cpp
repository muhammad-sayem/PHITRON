// Maximum Substring (size) with K Unique Characters //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    int n = s.size();

    int fre[26] = {0};

    int i = 0, j = 0, unique = 0;

    while(j<n){
        fre[s[j]-'a']++;

        if(fre[s[j]-'a'] ==  1){
            unique++;
        }

        while(unique > k){
            fre[s[i]-'a']--;

            if(fre[s[i]-'a'] == 0){
                unique--;
            }
            i++;
        }

        if(unique == k){
            cout << j-i+1 << " ";
        }

        j++;
    }
    
    return 0;
}