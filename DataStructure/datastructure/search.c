/*************************************************************************
	> File Name: search.c
	> Author: 
	> Mail: 
	> Created Time: Fri 08 Dec 2023 02:30:25 PM CST
 ************************************************************************/

#include<stdio.h>

int BinarySearch(int *nums, int n, int val){
    int left = 0;
    int right = n - 1;
    while(left < right){
        int mid = left + (right - left);
        if(nums[mid] == val){
            return mid;
        }
        if(nums[mid] < val){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

// 000111111 1

int BinarySearchSpecial_01(int *nums, int n){
    int left = 0;
    int right = n;
    while(left < right){
        int mid = left + (right - left) / 2;
        if(nums[mid] == 1){
            right = mid;
        }
        if(nums[mid] == 0){
            left = mid + 1;
        } 
    }
    return left == n ? -1 : left;
}

// 1111000000 1
int BinarySearchSpecial_10(int *nums, int n){
    int left = -1;
    int right = n - 1;
    while(left < right){
        int mid = (left + right + 1) / 2;
        if(nums[mid] == 1){
            left = mid;
        }
        if(nums[mid] == 0){
            right = mid - 1;
        }
    }
    return left;
}

int main(){
    int nums[] = { 1, 3, 6, 6, 13, 16, 18, 20, 90, 108};
    int ind = BinarySearch(nums, sizeof(nums) / sizeof(int), 7);
    printf("nums[%d] = %d\n", ind, 7);
    int nums1[] = {0,0,0,1,1,1,1,1,1,1};
    ind = BinarySearchSpecial_01(nums1, sizeof(nums1) / sizeof(int));
    for(int i = 0; i < sizeof(nums1) / sizeof(int); i++){
        printf("%d ", nums1[i]);
    }
    printf("\n");
    printf("ind = %d\n", ind);
    
    int nums2[] = {1,1,1,1,0,0,0,0,0,0};
    ind = BinarySearchSpecial_10(nums2, sizeof(nums1) / sizeof(int));
    for(int i = 0; i < sizeof(nums1) / sizeof(int); i++){
        printf("%d ", nums2[i]);
    }
    printf("\n");
    printf("ind = %d\n", ind);
   
    return 0;
}
