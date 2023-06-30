#include<bits/stdc++.h>
using namespace std;

void printC(int n, char ch){
    int i;
    for(i=1; i<=n; i++){
        cout << ch << " ";
    }
    cout << endl;
}

int main()
{
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        cin.ignore();
        char ch;
        cin >> ch;

        printC(n, ch);

    }
    
    return 0;
}