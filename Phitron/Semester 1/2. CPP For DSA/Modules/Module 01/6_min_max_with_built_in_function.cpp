#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int mn = min(a,b);
    int mx = max(a,b);

    cout << "Min: " << mn << endl << "Max: " << mx << endl;

    return 0;
}

// ----------------------------------------------------------- //

// Manual Function //

// #include<iostream>
// using namespace std;

// int myMin(int a, int b){
//     if(a<b) return a;
//     else return b;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int res = myMin(a, b);
//     cout << res << endl;

//     // cout << myMin(a, b) << endl;

//     return 0;
// }