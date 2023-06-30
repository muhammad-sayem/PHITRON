                                    /// a ///
// Question: Explain Stack and Heap memory. //

/*
Stack Memory:
    This type of memory also known for compile time memory. This  type of memory works while compiling.
    And this type of memory takes the space what it needs. And we can't update the elements after we run the code.
    And also it is removed by itself after returning it's value. We can't access it again if we need this.
    It's a drawback of stack memory.

Heap Memory:
    This type of memory also known for runtime time memory. There are some advantages of heap memory.
    If the user doesn't want to remove the value it will not be deleted.
    Hence it's removing is depended on user, so user can update the elements whenever he/she wants before deleting.
    And also, we can remove it from our memory ehenever we want. And it saves memory size.  
*/

// ---------------------------------------------------------------------- //

                                    /// b //

// Question: Why do we need dynamic memory allocation? Explain with examples //

/*
Dynamic Memory Allocation is needed for various reasons. 

When we uses dynamic variables or objects or arrays then it works in the heap memory. 
It gives the address to the stack memory. Actually it is more useful with the array.
Because if we use a function and it returns a static array pointer then we will not able to access it.
Because the static array will return the address of the array and it will remove by itself. And there will be nothing available for access from the main function.

But with the dynamic array, it will create the array in heap memory, and it will not remove by itself. 
It will only remove when user wants to delete this.
And with this type, the address of the array which is in heap memory will be in the stack memory and we can access it whenever we want until we delete it.

Also, we can increase or decrease our array size and delete the previous array (which is not necessary for rest of the code) with the heap memory.
Which frees our memory size.

Example 1:

#include<bits/stdc++.h>
using namespace std;

int* reverseArray(int num){
    int *a = new int[num+5];
    int i;
    
    for(i=0; i<num; i++){
        cin >> a[i];
    }

    return a;
}

int main()
{
    int n, i;
    cin >> n;

    int *arr = reverseArray(n);

    for(i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    
    return 0;
}

Input: 
5
1 2 3 4 5
Output:
5 4 3 2 1

But it is not possible with the static array

Example 2:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];
    int *b = new int[8];
    int i;

    for(i=0; i<5; i++){
        cin >> a[i];
    }

    for(i=0; i<5; i++){
        b[i] = a[i];
    }

    b[5] = 17;
    b[6] = 27;
    b[7] = 37;

    for(i=0; i<8; i++){
        cout << b[i] << " ";
    }

    cout << endl;

    delete[] a;

    return 0;
}

Input:
1 2 3 4 5
Output:
1 2 3 4 5 17 27 37

And now if we print the values of array 'a' it will not work properly.

*/

// --------------------------------------------------------------------------- //

                                /// c ///

// Question: How to create a dynamic array? What are the benefits of it? //

/*
The syntax of dynamic array is given below:
    int *a = new int[];
Here, if we want to declare a dynamic array we need to use the keyword "new".
After that need to write the data type of the array. 
It creates an array to the heap memory and gives the address of it. And hence it gives address, we need a pointer to recieve it.
And then we can work with the array by dereferencing.


There are several benifits of using dynamic array.

Firstly, if we want to return an array from a function and wants to work with it, then we must need to use dynamic array.
Because with the stack array it will return the address of the first index of the value but it deletes by itself.
But in the dynamic array it will remain in the heap memory and it will not removed until the user deletes it.

Also, if we want to increase or decrease the size of the array without wastage of the memory.
In static array we can't remove the unnecessary array after using it. It fills the memory size.
But if we use dynamic array then it is possible to remove unnecessary arrays after the work is done.
And it frees our memory.


Example:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[8];
    int *b = new int[5];
    int i;

    for(i=0; i<8; i++){
        cin >> a[i];
    }

    for(i=0; i<5; i++){
        b[i] = a[i];
    }

    for(i=0; i<5; i++){
        cout << b[i] << " ";
    }

    cout << endl;

    delete[] a;

    return 0;
}

Input:
1 2 3 4 5 6 7 8
Output:
1 2 3 4 5

And if we want to print the array 'a' then it will not work properly

*/

