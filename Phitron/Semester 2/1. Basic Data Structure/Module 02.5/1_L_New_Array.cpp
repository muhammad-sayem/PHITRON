#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n+5];
    int b[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    for(i=0; i<n; i++){
        cin >> b[i];
    }

    vector<int> v(2*n);

    for(i=0; i<n; i++){
        v[i] = b[i];
    }

    for(i=n, j=0; i<2*n; i++, j++){
        v[i] = a[j];
    }

    for(i=0; i<2*n; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}

// --------------------------------------------------------------------------- //

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;

    int a[n+5];
    int b[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    for(i=0; i<n; i++){
        cin >> b[i];
    }

    vector<int> v(b, b+n);

    v.insert(v.begin()+n, a, a+n);

    for(i=0; i<2*n; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
*/

// ----------------------------------------------------------------------- //

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;

    vector<int> v1(n);
    vector<int> v2(n);

    for(i=0; i<n; i++){
        cin >> v1[i];
    }

    for(i=0; i<n; i++){
        cin >> v2[i];
    }

    vector<int> ans(v2);

    ans.insert(ans.begin()+n, v1.begin(), v1.end());

    for(i=0; i<2*n; i++){
        cout << ans[i] << " ";
    }
    
    return 0;
}
*/