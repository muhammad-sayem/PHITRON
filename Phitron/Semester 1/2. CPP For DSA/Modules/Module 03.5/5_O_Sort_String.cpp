#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a, a + n)
#define rev(a) reverse(a, a + n)
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;                // asif_abdullah //
    int n;
    cin >> n;
    char x;

    int a[26]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
        {
            for (int j = 0; j < a[i]; j++)
            {
                cout << char(i + 97);
            }
        }
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char s[100];
//     cin >> s;
//     int n=strlen(s);
    
//     sort(s,s+n);
//     cout << s << endl;
    
     
//     return 0;
// }