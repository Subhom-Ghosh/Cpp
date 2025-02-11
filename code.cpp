#include<bits/stdc++.h>
using namespace std;
int findmax(int arr[],int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr1[] = {12,23,43,13,78,56,76};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int max = findmax(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 return 0;
}
