#include <iostream>
using namespace std;

// Time Complexity - O(n^2)

void insertionSort(int A[], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]<A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
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
    insertionSort(A,n);
    cout<<"After Performing the Insertion sort the elements arranged as follows : \n";
    for(int i=0;i<n;i++){ 
        cout<<A[i]<<" "; 
    }
    cout<<endl;
    return 0;
}
