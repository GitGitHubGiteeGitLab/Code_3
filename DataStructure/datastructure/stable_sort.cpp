/*************************************************************************
	> File Name: Sort.c
	> Author: 
	> Mail: 
	> Created Time: Mon 04 Dec 2023 01:45:21 PM CST
 ************************************************************************/

#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>
#include<cstring>
void Swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

//插入排序
void InsertSort(int* nums, int n){
    //记录未排序区的第一个元素,从已排序区的最后一个元素
    // i + 1 < n
    // 数组下标不越界
    for(int i = 0; i + 1 < n; i++){
        int end = i;
        int tmp = nums[end + 1];
        while(end >= 0){
            if(tmp < nums[end]){
                nums[end + 1] = nums[end];
                end--;
            }else{
                break;
            }
        }
        nums[end + 1] = tmp;
    }
}

//冒泡排序
void BubbleSort(int *nums, int n){
    for(int i = 0; i < n; i++){
        int flag = 0;
        //已排序区i个元素，未排序区j + 1个元素, 第j+1个元素无法和后面地元素进行比较(reason: 下标越界)
        // j + 1个数只需要比较j次
        for(int j = 0;  i + (j + 1) < n ; j++){
            if(nums[j] > nums[j+1]){
                Swap(nums + j, nums + j + 1);
                flag = 1;
            }
        }
        if(!flag){
            break;
        }
    }
}

void MergeSort(int *nums, int l, int r){
    if(r == l){
        return;
    }
    if(r - l == 1){
        if(nums[l] > nums[r]){
            Swap(nums + l, nums + r);  
        }
        return; 
    }
    int mid = (l + r) >> 1;
    MergeSort(nums, l, mid);
    MergeSort(nums, mid + 1, r);
    //暂时存储
    int *tmp = (int *)malloc(sizeof(int) * (r - l + 1));
    int p1 = l, p2 = mid + 1, k = 0;
    while(p1 <= mid && p2 <= r){
        if(nums[p1] <= nums[p2]){
            tmp[k++] = nums[p1++];
        }else{
            tmp[k++] = nums[p2++];
        }
    }
    while(p1 <= mid){
        tmp[k++] = nums[p1++]; 
    }
    while(p2 <= r){
        tmp[k++] = nums[p2++];
    }
    memcpy(nums+l, tmp, sizeof(int) * (r - l + 1));
    free(tmp);
    tmp = NULL;
}


//基数排序
//获取序列中的最大值
int getMax(int *nums, int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        max = fmax(max, nums[i]);
    }
    return max;
}

//按照指定的位数来进行基数排序
void CountingSort(int *nums, int n, int exp){
    //exp从1开始一直到最大值的位数，exp位
    int count[10] = {0};
    //循环统计每一位数字的对应位的分组的个数
    for(int i = 0; i < n; i++){
        count[nums[i] / exp % 10]++;
    }
    //循环地统计每一个基数区域最后一个数是整串数中第几个数
    for(int i = 1; i < 10; i++){
        count[i] += count[i - 1];
    }

    //开始排序
    int tmp[n];
    for(int i = n-1; i >= 0; i--){
        int number = nums[i] / exp % 10;
        //先减减是关键
        //第几个数和下标之间差1
        tmp[--count[number]] = nums[i];
    }

    memcpy(nums, tmp, sizeof(int) * n);
    return;
} 
//针对正数排序
void RadixSort(int *nums, int n){
    int max = getMax(nums, n);
    int i = 0;
    while(max){
        max /= 10;
        i++;
    }
    for(int exp = 0; exp < i; exp++){
        CountingSort(nums, n, pow(10, exp));
    }
    
}

//高内聚，低耦合
void output(int *nums, int n, const char *type){
    printf("[");
    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
    printf("] <- %s\n", type);
}

int main(){
    srand((unsigned)time(NULL));
    #define N 10
    int arr[N] = {0};
    for(int i = 0; i < N; i++){
        arr[i] = rand() % 100;
    }
    output(arr, N, "original");
    InsertSort(arr, N);
    output(arr, N, "InsertSort");
    
    for(int i = 0; i < N; i++){
        arr[i] = rand() % 100;
    }
    output(arr, N, "original");
    BubbleSort(arr, N);
    output(arr, N, "BubbleSort");
    
    for(int i = 0; i < N; i++){
        arr[i] = rand() % 100;
    }
    output(arr, N, "original");
    MergeSort(arr, 0, 9);
    output(arr, N, "MergeSort");
    
    for(int i = 0; i < N; i++){
        arr[i] = rand() % 100;
    }
    output(arr, N, "original");
    RadixSort(arr, N);
    output(arr, N, "RadixSort");

    return 0;
}
