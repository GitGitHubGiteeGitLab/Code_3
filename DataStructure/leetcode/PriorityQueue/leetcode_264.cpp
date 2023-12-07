class Solution {
public:
    int nthUglyNumber(int n) {
         //建一个小根堆
         //用int会溢出
        priority_queue<long, vector<long>, greater<long>>que;
        que.push(1);
        int i = 0;
        long ans = 1;
        while(i < n){
            //丑数*2， 丑数*3, 丑数*5 仍是丑数
            que.push(ans * 2);
            que.push(ans * 3);
            que.push(ans * 5);
            ans = que.top();
            que.pop();
            //利用小根堆的性质去重
            while(!que.empty() && ans == que.top()){
                que.pop();
            }
            ++i;
        }
        return ans;
    }
    
};