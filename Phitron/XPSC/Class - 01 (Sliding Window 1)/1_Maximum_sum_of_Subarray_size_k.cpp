// // Maximum sum of a subarray of size K //

// #include<bits/stdc++.h>
// #define  ll long long
// using namespace std;
// int main()
// {
//     int n, i, j;
//     cin >> n;
//     int a[n+5];
 
//     for(i=0; i<n; i++){
//         cin >> a[i];
//     }

//     int k;
//     cin >> k;

//     i = 0;
//     j = 0;
//     int sum = 0;
//     int maxx = INT_MIN;

//     while(j<n){
//         sum += a[j];
        
//         if(j >= k-1){
//             // cout << sum << endl;

//             maxx = max(maxx, sum);
//             sum -= a[i];
//             i++;
//         }

//         j++;
//     }

//     cout << maxx << endl;
    
//     return 0;
// }

// ----------------------------------------------------------------- //


#include<bits/stdc++.h>
#define  ll long long
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n+5];
 
    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int k;
    cin >> k;

    int sum = 0;

    for(i=0; i<k; i++){
        sum += a[i];
    }

    int maxx = sum;

    i = 0;
    j = k;

    while(j<n){
        sum += a[j];
        sum -= a[i];
        maxx = max(sum, maxx);
        i++;
        j++;
    }

    cout << maxx << endl;
    
    return 0;
}


// ------------------------------------------------------------------- //

// Masud's Logic //

/*
#include<bits/stdc++.h>
#define  ll long long
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n+5];
 
    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int k;
    cin >> k;

    int sum = 0;

    for(i=0; i<k; i++){
        sum += a[i];
    }

    int maxx = sum;

    for(i=k; i<n; i++){
        sum += a[i] - a[i-k];
        maxx = max(maxx, sum);
    }

    cout << maxx << endl;
    
    return 0;
}
*/




