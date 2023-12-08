class MedianFinder {
public:
    //less：大根堆
    priority_queue<int, vector<int>, less<int>> queMin;
    //greater: 小根堆
    priority_queue<int, vector<int>, greater<int>> queMax;
    MedianFinder() {}
    
    void addNum(int num) {
        if(queMin.empty() || num <= queMin.top()){
            queMin.push(num);
            //queMax.size() <= queMin.size() <= queMax.size() + 1
            if(queMax.size() + 1 < queMin.size()){
                queMax.push(queMin.top());
                queMin.pop();
            }
        }else{
            queMax.push(num);
            //queMin.size() - 1 <= queMax.size() <= queMin.size()
            if(queMax.size() > queMin.size()){
                queMin.push(queMax.top());
                queMax.pop();
            }
        }
    }
    
    double findMedian() {   
        if(queMin.size() > queMax.size()){
           return queMin.top();
        }else{
            // sum / 2.0-->double
            // sum / 2-->int
            return (queMin.top() + queMax.top()) / 2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */