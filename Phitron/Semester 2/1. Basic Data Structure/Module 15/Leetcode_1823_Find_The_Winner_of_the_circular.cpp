class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        int i;

        for(i=1; i<=n; i++){
            q.push(i);
        }

        int c = k;
        
        while(q.size()>1){

            int val = q.front();
            q.pop();
            c--;
            if(c == 0){
                c = k;
            }
            else{
                q.push(val);
            }
        }

        return q.front();
    }
};