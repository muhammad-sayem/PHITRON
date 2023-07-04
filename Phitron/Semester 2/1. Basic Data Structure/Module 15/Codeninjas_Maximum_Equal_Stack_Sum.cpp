#include <bits/stdc++.h> 

int getSum(stack<int> st){
    long long sum = 0;

    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
    return sum;
}


int maxSum(stack<int> &st1, stack<int> &st2, stack<int> &st3) {

    long long sum1 = getSum(st1);
    long long sum2 = getSum(st2);
    long long sum3 = getSum(st3);

    while(true){
        if(sum1 == sum2 && sum2 == sum3){
            break;
        }

        else if(sum1>=sum2 && sum1>=sum3){
            sum1 -= st1.top();
            st1.pop();
        }

        else if(sum2>=sum1 && sum2>=sum3){
            sum2 -= st2.top();
            st2.pop();
        }
        else{
            sum3 -= st3.top();
            st3.pop();
        }
    }

    return sum1;        // Je kono ekta return korlei hoy, karon 3 ta value same e //

}