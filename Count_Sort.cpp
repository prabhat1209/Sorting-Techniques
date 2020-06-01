#include <iostream>
#include<malloc.h>
using namespace std;

int maxElement(int A[], int n){
    int max = INT32_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>max)
            max = A[i];
    }
    return max;
}

void countSort(int A[], int n){
    int i, j, max, *C;
    
    max = maxElement(A,n);
    C = (int *)malloc(sizeof(int)*(max+1));
    
    for(i=0;i<max+1;i++)
        C[i] = 0;
        
    for(i=0;i<n;i++)
        C[A[i]]++;
    
    i = j = 0;
    while(i<max+1){
        if(C[j]>0){
            A[i++] = j;
            C[j]--;
        }else
            j++;
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
    countSort(A,n);
    cout<<"After Performing the Count sort the elements arranged as follows : \n";
    for(int i=0;i<n;i++){ 
        cout<<A[i]<<" "; 
    }
    cout<<endl;
    return 0;
    
}
