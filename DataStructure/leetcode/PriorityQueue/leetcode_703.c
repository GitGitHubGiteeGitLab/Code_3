


typedef struct {
    int *data;
    int size;
    int capacity;
} KthLargest;


void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int kthLargestAdd(KthLargest* obj, int val);

//维护一个大小为k的小顶堆，堆顶是第k大的元素，也是堆中最小的元素
KthLargest* kthLargestCreate(int k, int* nums, int numsSize) {
    KthLargest* obj = (KthLargest *)malloc(sizeof(KthLargest));
    obj->data = (int *)malloc(sizeof(int) * (k + 1));
    obj->capacity = k;
    obj->size = 0;
    //root: 1 2*i 2*i + 1
    //root: 0 2*i + 1 2*i + 2
    //建小根堆
    for(int i = 0; i < numsSize; i++){
        kthLargestAdd(obj, nums[i]);
    }
    return obj;
}

//堆排序，小顶堆
int kthLargestAdd(KthLargest* obj, int val) {
    if(obj->size < obj->capacity){
        //root: 1 
        obj->size++;
        obj->data[obj->size] = val;
        int ind = obj->size;
        while((ind >> 1) >= 1){
            if(obj->data[ind] < obj->data[ind >> 1]){
                swap(&obj->data[ind], &obj->data[ind >> 1]);
                ind >>= 1;
            }else{
                break;
            }
        }   
    }else{
        if(val > obj->data[1]){
            obj->data[1] = val;
            int ind = 1;
            while((ind << 1) <= obj->size){
                int tmp = ind;
                int l = ind << 1;
                int r = ind << 1 | 1;//r要在l基础上加1
                if(obj->data[tmp] > obj->data[l]){
                    tmp = l;
                }
                if(r <= obj->size && obj->data[tmp] > obj->data[r]){
                    tmp = r;
                }
                if(tmp == ind)break;
                swap(&obj->data[ind], &obj->data[tmp]);
                //ind <<= 1是不正确的.原因：ind <<= 1 <=> ind = l, 但tmp可能tmp == r
                ind = tmp;//更新ind
            }
        }
    }
    return obj->data[1];
}

void kthLargestFree(KthLargest* obj) {
    if(!obj)return;
    free(obj->data);
    free(obj);
}

/**
 * Your KthLargest struct will be instantiated and called as such:
 * KthLargest* obj = kthLargestCreate(k, nums, numsSize);
 * int param_1 = kthLargestAdd(obj, val);
 
 * kthLargestFree(obj);
*/