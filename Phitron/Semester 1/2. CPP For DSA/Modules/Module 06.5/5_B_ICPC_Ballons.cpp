#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){
        int n, i, cnt = 0;
        cin >> n;

        string str;
        cin >> str;

        char ch;

        for(ch='A'; ch<='Z'; ch++){
            int flag = 0;
            for(i=0; i<n; i++){
                if(str[i] == ch){
                    flag++;
                    if(flag == 1){
                        cnt +=2;
                    }
                    else if(flag > 1){
                        cnt++;
                    }
                }
            }
        }

        cout << cnt << endl;

    }
    
    return 0;
}