#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){
        string str;
        cin >> str;

        int i, sum1 = 0, sum2 = 0;

        for(i=0; i<3; i++){
            sum1 += str[i]-'a'; 
        }

        for(i=3; i<6; i++){
            sum2 += str[i]-'a'; 
        }

        if(sum1 == sum2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}