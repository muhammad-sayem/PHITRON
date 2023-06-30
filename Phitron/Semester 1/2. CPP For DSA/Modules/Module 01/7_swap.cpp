#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    swap(x,y);

    cout << x << " " << y << endl;

    return 0;
}

// --------------------------------------------------------------- //

// Phitron's Code (Manual Swap) //
/*
#include<iostream>
#include<utility>
using namespace std;
void my_swap(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    my_swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
*/