#include <iostream>
#include<malloc.h>
using namespace std;

// Time Complexity - O(nlogn) or O(n^3/2) or O(n^5/3)

void shellSort(int A[], int n){
    int i, j, gap, temp;
    
    for(gap=n/2;gap>=1;gap/=2){
        for(i=gap;i<n;i++){
            temp = A[i];
            j = i-gap;
            while(j>=0 && A[j]>temp){
                A[j+gap] = A[j];
                j = j-gap;
            }
            A[j+gap] = temp;
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
    shellSort(A,n);
    cout<<"After Performing the Shell sort the elements arranged as follows : \n";
    for(int i=0;i<n;i++){ 
        cout<<A[i]<<" "; 
    }
    cout<<endl;
    return 0;
    
}
