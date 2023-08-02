#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int a[N];

void merge(int l, int r, int mid){
    int i, j;

    int left_size = mid-l+1;
    int L[left_size+1];

    int right_size = r-mid;
    int R[right_size+1];

    for(i=l, j=0; i<=mid; i++, j++){
        L[j] = a[i];
    }

    for(i=mid+1, j=0; i<=r; i++, j++){
        R[j] = a[i];
    }

    L[left_size] = INT_MAX;
    R[right_size] = INT_MAX;

    int lp = 0;         // left pointer //
    int rp = 0;         // right pointer //

    for(i=l; i<=r; i++){
        if(L[lp] <= R[rp]){
            a[i] = L[lp];
            lp++;
        }
        else{
            a[i] = R[rp];
            rp++;
        }
    }
}

void mergeSort(int l, int r){

    if(l == r) return;          // Base Case //
    
    int mid = (l+r)/2;
    mergeSort(l, mid);
    mergeSort(mid+1, r);
    merge(l, r, mid);
}

int main()
{
    int n, i;
    cin >> n;

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    mergeSort(0, n-1);          // first and last index pathano hocche //

    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}