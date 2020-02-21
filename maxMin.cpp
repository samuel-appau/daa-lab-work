#include <iostream>
using namespace std;


void MaxMin(int arr[], int low, int high, int& min, int& max)
{
   

    if (low == high)           
    {
        if (max < arr[low])     
            max = arr[low];

        if (min > arr[high])    
            min = arr[high];

        return;
    }

    

    if (high - low == 1)            
    {
        if (arr[low] < arr[high])    
        {
            if (min > arr[low])     
                min = arr[low];

            if (max < arr[high])    
                max = arr[high];
        }
        else
        {
            if (min > arr[high])    
                min = arr[high];

            if (max < arr[low])    
                max = arr[low];
        }
        return;
    }

    
    int mid = (low + high) / 2;


    MaxMin(arr, low, mid, min, max);

    
    MaxMin(arr, mid + 1, high, min, max);
}

// main function
int main()
{
    int arr[20] ;
    int num;
    
            cout<<"Finding the  minimum and maximum number in an array"<<endl;
cout<<"================================================================================================"<<endl;
    
    cout<<"Enter the size of the array"<<endl;
    cin>>num;
    
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<num;i++)
    cin>>arr[i];

    // initialize the minimum element by infinity and the
    // maximum element by minus infinity
    int max = INT_MIN, min = INT_MAX;

    MaxMin(arr, 0, num - 1, min, max);

    cout << "The maximum element in the array is" << max<< '\n';
    cout << "The minimum element in the array is " << min;

    return 0;
}
