#include <iostream>
using namespace std;
void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
//reverse array
void reverseArray(int arr[],int n){
  int start=0;
  int end=n-1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

int maximum(int arr[],int n){
  int maxi=INT8_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>maxi){
      maxi=arr[i];
    }
  }
  return maxi;
}
int minimum(int arr[],int n){
  int mini=INT8_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<mini){
      mini=arr[i];
    }
  }
  return mini;
}

int linearSearch(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;
}




// void swapAlternate(int *arr, int size)
// {
//    for(int i=0;i<size;i+=2){
//        if(i+1<size){
//            swap(arr[i],arr[i+1]);
//        }
//    }
// }


// class Solution
// {
//     private:
//     int getMax(int A[],int n){
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++){
//             if(A[i]>maxi){
//                 maxi=A[i];
//             }
//         }
//         return maxi;
//     }
//     int getMin(int A[],int n){
//         int mini=INT_MAX;
//         for(int i=0;i<n;i++){
//             if(A[i]<mini){
//                 mini=A[i];
//             }
//         }
//         return mini;
//     }
//    public:
//     int findSum(int A[], int N)
//     {
//     	int ans=getMax(A,N)+getMin(A,N);
//     	return ans;
//     }

// };



int main() {
int arr[]={10,11,12,13,14};
int arr1[]={15,16,17,18};
int n=sizeof(arr)/sizeof(arr[0]);
int n1=sizeof(arr1)/sizeof(arr[0]);
 // cout<<n1;
  // int n=sizeof(arr)/sizeof(int);    //both are same things
  // cout<<n;
// printArray(arr, n);
// cout<<endl;
// printArray(arr1,n1);
  // printArray(arr, n);
  // cout<<endl;
  // reverseArray(arr,n);
  // cout<<endl;
  // printArray(arr, n);
  // cout<<endl;
  // printArray(arr1, n1);
  // cout<<endl;
  // reverseArray(arr1,n1);
  // cout<<endl;
  // printArray(arr1, n1);

  // int max=maximum(arr, n);
  // int min=minimum(arr, n);
  // cout<<"Maximmum element in the array is "<<max<<endl;
  // cout<<"Minimum element in the array is "<<min<<endl;
  int key;
  cin>>key;
  int ans=linearSearch(arr, n, key);
  cout<<ans<<endl;

  

  
}