#include<bits/stdc++.h>
using namespace std;

int* get_array(int n){
    int *a = new int[n+5];
    int i;

    for(i=0; i<n; i++){
        cin >> a[i];
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    int *arr = get_array(n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}