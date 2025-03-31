#include<stdio.h>
int main(){
def find_min_subarray_length(arr):
    n = len(arr)
    if n <= 1:
        return 0
    
    left = 0
    while left < n - 1 and arr[left] <= arr[left + 1]:
        left += 1
    
    if left == n - 1:
        return 0  # array is already sorted
    
    right = n - 1
    while right > 0 and arr[right] >= arr[right - 1]:
        right -= 1
    
    # Find the min and max in the subarray from left to right
    subarray_min = min(arr[left:right + 1])
    subarray_max = max(arr[left:right + 1])
    
    # Expand left to include any elements greater than subarray_min
    while left > 0 and arr[left - 1] > subarray_min:
        left -= 1
    
    # Expand right to include any elements less than subarray_max
    while right < n - 1 and arr[right + 1] < subarray_max:
        right += 1
    
    return right - left + 1

T = int(input())
for _ in range(T):
    N = int(input())
    arr = list(map(int, input().split()))
    print(find_min_subarray_length(arr))
}