#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> v(n);

    for(i=0; i<n; i++){
        cin >> v[i];
    }

    int x;
    cin >> x;

    auto it = upper_bound(v.begin(), v.end(), x);
    int index = it - v.begin();

    cout << "Index: " << index << endl;
    cout << "value: " << *it << endl;

    return 0;
}

// ----------------------------------------------------------------- //

// Using Array (Same Jinish) //

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int x;
    cin >> x;

    auto it = upper_bound(a, a+n, x);
    int index = it - a;

    cout << "Index: " << index << endl;
    cout << "value: " << *it << endl;

    return 0;
}
*/