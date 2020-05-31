#include <iostream>
using namespace std;

// Time Complexity - maximum = O(n^2)
//                   minimum = O(n) ; if the arrangement of elements is already sorted.
// Adaptive
// Stable

void bubbleSort(int A[], int n){
    int flag;
    for(int i=0;i<n-1;i++){
        flag = 0;
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                flag =1;
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
        if(flag==0)
            break;
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
    bubbleSort(A,n);
    cout<<"After Performing the bubble sort the elements arranged as follows : \n";
    for(int i=0;i<n;i++){ 
        cout<<A[i]<<" "; 
    }
    cout<<endl;
    return 0;
}
