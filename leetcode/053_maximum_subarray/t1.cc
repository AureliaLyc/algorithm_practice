#include <math.h>
#include <vector>
using namespace std;
int divideAndConquer(int A[], int left, int right);
int maxSubArray(int A[], int n) {
    return divideAndConquer(A, 0, n - 1);
}
int divideAndConquer(int A[], int left, int right){
    if(left == right){
        return A[left];
    }
    if(left > right){
        return INT_MIN;
    }
    int mid = left + (right - left) / 2;
    int maxLeft = 0;
    int sum = 0;
    for(int i = mid - 1; i >= left; i--){
        sum += A[i];
        maxLeft = max(maxLeft, sum);
    }
    int maxRight = 0;
    sum = 0;
    for(int i = mid + 1; i <= right; i++){
        sum += A[i];
        maxRight = max(maxRight, sum);
    }
    int maxSumWithMid = maxLeft + A[mid] + maxRight;
    return max(maxSumWithMid, max(divideAndConquer(A, left, mid - 1), divideAndConquer(A, mid + 1, right)));
}

int main(int argc, char const *argv[])
{
    int a[]={-2,1,-3,4,-1,2,1,-5,4};
    int b = maxSubArray(a, sizeof(a)/sizeof(int));
    return 0;
}