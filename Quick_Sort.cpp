#include <iostream>
using namespace std;
/*                                                                        Time Complexity
   Best Case - If the partionong is happening at the middle position        O(nlogn)
   
   Worst Case - If the partioning is happening on any end.                  O(n^2)
   Means the elements are already sorted.                                                                            
   Worst case can be a Best case if we select middle element as pivot.
   
   Average Case                                                             O(nlogn)   
*/
  

int partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l,j=h;

    do
    {
    do{i++;}while(A[i]<=pivot);
    do{j--;}while(A[j]>pivot);
    
    if(i<j){
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp; 
        }
    }while(i<j);

    int temp = A[j];
    A[j] = A[l];
    A[l] = temp;
    return j;
}


void quickSort(int A[], int l, int h){
    int j;
    if(l<h){
        j = partition(A,l,h);
        quickSort(A,l,j);
        quickSort(A,j+1,h);
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
    quickSort(A,0,n);
    cout<<"After Performing the bubble sort the elements arranged as follows : \n";
    for(int i=0;i<n;i++){ 
        cout<<A[i]<<" "; 
    }
    cout<<endl;
    return 0;
}
