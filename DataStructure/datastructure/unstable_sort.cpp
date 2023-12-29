/*************************************************************************
	> File Name: unstable_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 07 Dec 2023 03:36:33 PM CST
 ************************************************************************/

#include<cstdio>
#include<cstdlib>
#include<ctime>

void Swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void SelectSort(int *nums, int n){
    int begin = 0;
    int end = n - 1;
    while(begin < end){
        int min = begin;
        int max = begin;
        for(int i = begin + 1; i <= end ; i++){
            if(nums[i] < nums[min]){
                min = i;
            }
            if(nums[i] > nums[max]){
                max = i;
            }
        }
        Swap(&nums[min], &nums[begin]);
        if(max == begin){
           max = min; 
        } 
        Swap(&nums[max], &nums[end]);
        begin++;
        end--;
    }
}

void QuickSort(int *nums, int begin, int end){
    if(begin >= end){
        return;
    }

    int left = begin, right = end;
    int keyi = begin;
    while(left < right){
        //找到真大于/真小于
        while(left < right && nums[right] >= nums[keyi]){
            right--;
        }
        while(left < right && nums[left] <= nums[keyi]){
            left++;
        }
        Swap(&nums[left], &nums[right]);
    }
    Swap(&nums[keyi], &nums[left]);
    keyi = left;
    QuickSort(nums, begin, keyi-1);
    QuickSort(nums, keyi+1, end);
}

void ShellSort(int *nums, int n){
    int gap = n;
    while(gap > 1){
        //最后一趟gap一定是1
        gap = gap / 3 + 1;
        for(int i = 0; i + gap < n; i++){
            int tmp = nums[i + gap];
            int end = i;
            while(end >= 0){
                if(nums[end] > tmp){
                    nums[end + gap] = nums[end];
                    end -= gap;
                }else{
                    break;
                }
            }
            nums[end + gap] = tmp; 
        }
    }
}

void AdjustDownMax(int *nums, int n, int parent){
    int child = (parent << 1) | 1;
    while(child < n){
        if(child + 1 < n && nums[child] < nums[child + 1]){
            child++;
        }
        if(nums[parent] < nums[child]){
            Swap(&nums[parent], &nums[child]);
            parent = child;
            child = (parent << 1) | 1;
        }else{
            break;
        }
    }
}


void BuildHeap(int *nums, int n){
    for(int i = (n - 1) >> 1; i >= 0; i--){
        AdjustDownMax(nums, n, i);
    }
}

void output(int *nums, int n, const char *type);
void HeapSort(int *nums, int n){
    BuildHeap(nums, n);
    output(nums, n, "BuildHeap");
    int end = n - 1;
    while(end > 0){
        Swap(&nums[0], &nums[end]);
        //size is  end
        AdjustDownMax(nums, end, 0);
        end--;
    }
}

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
    SelectSort(arr, N);
    output(arr, N, "SelectSort");
    
    for(int i = 0; i < N; i++){
        arr[i] = rand() % 100;
    }
    output(arr, N, "original");
    QuickSort(arr, 0, N-1);
    output(arr, N, "QuickSort");
    
    for(int i = 0; i < N; i++){
        arr[i] = rand() % 100;
    }
    output(arr, N, "original");
    ShellSort(arr, N);
    output(arr, N, "ShellSort");   
    
    for(int i = 0; i < N; i++){
        arr[i] = rand() % 100;
    }
    output(arr, N, "original");
    HeapSort(arr, N);
    output(arr, N, "HeapSort");
    return 0;
}
