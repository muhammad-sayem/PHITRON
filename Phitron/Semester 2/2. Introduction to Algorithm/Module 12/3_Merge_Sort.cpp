#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r){
    int i, j;

    int leftSize = m-l+1;
    int rightSize = r-m;

    int L[leftSize];
    int R[rightSize];

    int k = 0;

    for(i=l; i<=m; i++){
        L[k] = a[i];
        k++;
    }

    k = 0;

    for(i=m+1; i<=r; i++){
        R[k] = a[i];
        k++;
    }

    i = 0;
    j = 0;
    int curr = l;

    while(i<leftSize && j<rightSize){
        if(L[i] <= R[j]){
            a[curr] = L[i];
            i++;
        }
        else{
            a[curr] = R[j];
            j++;
        }
        curr++;
    }

    while(i<leftSize){
        a[curr] = L[i];
        i++;
        curr++;
    }

    while(j<rightSize){
        a[curr] = R[j];
        j++;
        curr++;
    }
}

void mergeSort(int a[], int l, int r){

    if(l<r){
        int mid = (l+r)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, r);
        merge(a, l, mid, r);

        // cout << "This" << endl;

        // for(int i=l; i<=mid; i++){
        //     cout << a[i] << " ";
        // }

        // cout << endl;
        // for(int i=mid+1; i<=r; i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
    }
}

int main()
{
    int n, i;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    mergeSort(a, 0, n-1);       // divide e ja ja pathaisi shetai pathano hoise //
    
    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}