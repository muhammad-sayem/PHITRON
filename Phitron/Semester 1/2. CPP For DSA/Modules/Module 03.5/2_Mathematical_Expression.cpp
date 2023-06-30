#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char ch, eq;

    cin >> a >> ch >> b >> eq >> c;

    if(ch == '+'){
        if(a+b == c) cout << "Yes" << endl;
        else cout << a+b << endl;
    }
    
    else if(ch == '-'){
        if(a-b == c) cout << "Yes" << endl;
        else cout << a-b << endl;
    }

    else if(ch == '*'){
        if(a*b == c) cout << "Yes" << endl;
        else cout << a*b << endl;
    }
    
    return 0;
}


// Previous code (Submitted: 15-10-2022) //

/*
#include<stdio.h>
int main()
{
    int a, b, c, d;
    char s, q;

    scanf("%d", &a);
    getchar();
    scanf("%c", &s);
    scanf("%d", &b);
    getchar();
    scanf("%c", &q);
    scanf("%d", &c);

    if(s == '+'){
        d = a+b;
    }
    else if(s == '-'){
        d = a-b;
    }

    else if(s == '*'){
        d = a*b;
    }

    if(c == d){
        printf("Yes\n");
    }
    else{
        printf("%d\n", d);
    }
    return 0;
}
*/