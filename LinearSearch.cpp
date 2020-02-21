//Using divide and conquer approach in Linear search
#include <iostream> 
using namespace std; 
  
//creating  a function to do the linear search
int lnsearch(int arr[], int num, int key) 
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
    
    cout<<"Using divide and conquer approach in Linear search"<<endl;
    
    
    cout<<"======================================================================================="<<endl;
    cout<<"Enter the size of the array:"<<endl;
    cin>>num;
    
    
    cout<<"Enter the elements of the array:"<<endl;;
    for(int i=0;i< num;i++)
    	cin>>arr[i];
	
    
    
    cout<<"Enter the key element"<<endl;;
     cin>>key;
    
//Recursively calling the search function and comparing the key element to the elements in the array
//if key element is equal to any array element,then return the index of that element in the array
    int ans = lnsearch(arr, num, key); 
   (ans == -1)? cout<<"Element is not present in array" 
                 : cout<<"Element is present at index " <<ans; 
   return 0; 
} 
