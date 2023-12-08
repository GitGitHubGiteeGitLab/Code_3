// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//第一个问题
//0000011111 1
int firstBadVersion(int n) {
    int left = 1;
    //right不需要再开一位虚拟，不存在全0(无错误版本的情况)
    int right = n;
    while(left < right){
        int mid = left + (right - left) / 2;
        if(isBadVersion(mid)){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    return left;
}