class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        //int会越界
        //这道题与264不同之处在于primes=[2, 3, 5]变成其他质因数的集合
        priority_queue<long, vector<long>, greater<long>> que;
        long ans = 1;
        que.push(ans);
        int i = 0;
        int size = primes.size();
        while(i < n){
            int j = 0;
            while(j < size){
                que.push(ans * primes[j]);
                ++j;
            }
            ans = que.top();
            que.pop();
            while(!que.empty() && que.top() == ans){
                que.pop();
            }
            ++i;
        }
        return ans;
    }
};