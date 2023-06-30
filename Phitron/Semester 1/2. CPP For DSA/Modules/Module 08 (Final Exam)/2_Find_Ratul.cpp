#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int flag = 0;

    int ans = str.find("Ratul");
    
    if(ans == 0) cout << "YES" << endl;

    else if(ans != -1){
        if((str[ans+5] == ' ' || str[ans+5] == '\0') && (str[ans-1] == ' ')){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;

    return 0;
}