#include <iostream>
using namespace std;

// Time Complexity - maximum = O(n^2)
//                   minimum = O(n) ; if elements are already sorted. 
// Not Adaptive
// Not Stable
// kth smallest element can be determine in each pass
// maximum one swap is required in each pass


void selectionSort(int A[], int n){
    int i, j, k, temp;
    for(i=0;i<n;i++){
        for(j=k=i;j<n;j++){
            if(A[j]<A[i])
                k = j;
        }
        temp = A[i];
        A[i] = A[k];
        A[k] = temp;
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
    selectionSort(A,n);
    cout<<"After Performing the Selection sort the elements arranged as follows : \n";
    for(int i=0;i<n;i++){ 
        cout<<A[i]<<" "; 
    }
    cout<<endl;
    return 0;
}
