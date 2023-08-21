// #include<bits/stdc++.h>
// using namespace std;

// void merge(int a[], int l, int m, int r){
//     int i, j;
    
//     int leftSize = m-l+1;
//     int rightSize = r-m;

//     int L[leftSize];
//     int R[rightSize];

//     int k = 0;

//     for(i=l; i<=m; i++){
//         L[k] = a[i];
//         k++;
//     }
    
//     k = 0;

//     for(i=m+1; i<=r; i++){
//         R[k] = a[i];
//         k++;
//     }

//     i = 0;
//     j = 0;
//     int curr = l;

//     while(i<leftSize && j<rightSize){
//         if(L[i] <= R[j]){
//             a[curr] = L[i];
//             i++;
//         }
//         else{
//             a[curr] = R[j];
//             j++;
//         }
//         curr++;
//     }

//     while(i<leftSize){
//         a[curr] = L[i];
//         i++;
//         curr++;
//     }

//     while(j<rightSize){
//         a[curr] = R[j];
//         j++;
//         curr++;
//     }

// }

// int main()
// {
//     int n, i;
//     cin >> n;
//     int a[n+5];

//     for(i=0; i<n; i++){
//         cin >> a[i];
//     }

//     merge(a, 0, 3, n-1);        // 'a' diye array pathano hocche. 0 means 0 theke first array er first part er index, 3 means first array er jekhane shesh hobe shei index. n-1 holo second array jekhane shesh hobe shei index. second tar first (m+1) tehkei start hoy tai alada vabe pathate hoy na //

//     for(i=0; i<n; i++){
//         cout << a[i] << " ";
//     }
    
//     return 0;
// }

// -------------------------------------------------------------------------- //

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

int main()
{
    int n, i;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    merge(a, 0, 3, n-1);

    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}