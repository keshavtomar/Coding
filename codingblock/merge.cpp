#include<iostream>
using namespace std;

void merge(int arr[], int brr[], int n, int mergedArr[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n and j < n){
        if(arr[i] < brr[j]){
            mergedArr[k++] = arr[i++];
        }
        else{
            mergedArr[k++] = brr[j++];
        }
    }
    while(i < n){
        mergedArr[k++] = arr[i++];
    }
    while(j < n){
        mergedArr[k++] = brr[j++];
    }
}

int median(int arr[], int size){
    int centralIndex = (size/2)-1;
    return arr[centralIndex];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    for(int i = 0; i < n; i++)
        cin>>brr[i];
    int mergedArr[2*n];
    merge(arr, brr, n, mergedArr);
    cout<<median(mergedArr, 2*n)<<endl;
    return 0;
    }