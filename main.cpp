  //Using divide and conquer approach in Linear search
#include <iostream> 
using namespace std; 
  
int search(int arr[], int num, int key) 
{ 
    int i; 
    for (i = 0; i < num; i++) 
        if (arr[i] == key) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[20] ;
    int key;
    int num ;
    
    
    cout<<"Enter the size of the array:"<<endl;
    cin>>num;
    
    
    cout<<"Enter the elements of the array:"<<endl;;
    for(int i=0;i< num;i++)
    	cin>>arr[i];
	
    
    
    cout<<"Enter the key element"<<endl;;
     cin>>key;
    
    int result = search(arr, num, key); 
   (result == -1)? cout<<"Element is not present in array" 
                 : cout<<"Element is present at index " <<result; 
   return 0; 
} 
