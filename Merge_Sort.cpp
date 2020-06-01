#include <iostream>
using namespace std;

/* 
    Time Complexity for 2-way merging - O(m+n)  ; where m & n is the size of two arrays to be merged. 
    Time Complexity for sorting       - O(nlogn)
    Merge Sort is only sort which extra space for sorting i.e., nlogn for stack and an array of size n to merge.
    therefore, space complexity for merge sort is (2n + logn).
*/

void merge(int A[], int l, int mid, int h){
    int B[100], i, j, k;
    i = k = l;
    j = mid+1;
    while(i<=mid  && j<=h){
        if(A[i]<A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for( ;i<=mid;i++)
        B[k++] = A[i];
    for( ;j<=h;j++)
        B[k++] = A[j];
        
    for(i=l;i<=h;i++)
        A[i] = B[i];
        
}

void mergeSort(int A[], int l, int h){
    if(l<h){
        int mid = (l+h)/2;
        mergeSort(A,l,mid);
        mergeSort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}

int main()
{
    int n;
    cout<<"Enter the no. of Elements to be inserted : ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    mergeSort(A,0,n-1);
    cout<<"After Performing the Merge sort the elements arranged as follows : \n";
    for(int i=0;i<n;i++){ 
        cout<<A[i]<<" "; 
    }
    cout<<endl;
    return 0;
}
