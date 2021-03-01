#include <iostream>
using namespace std;

//Function to find the min and max value
void findMinMaxElement(int arr[] , int n){
     int max = arr[0], min = arr[0];
     
     for(int i = 1; i < n; i++){
      //find the maximum value 
     if(max < arr[i])
         max = arr[i];
      //find the minimum value   
     if(min > arr[i])
         min = arr[i];
   }
   cout<<"Maximum value in the Array= "<<max<<"\n";
   cout<<"Minimum Value in the Array= "<<min;
}

int main(){
    int t;
    cout<<"Enter the test case: "<<endl;
    cin>>t;
    while(t--){
         int n;
         cout<<"Enter the Size of an Array: "<<endl;
	 cin>>n;
	 int arr[n];
         cout << "Enter the element in the Array: "<<endl; 
	 for(int i=0;i<n;i++){
	     cin>>arr[i];
	  }
         findMinMaxElement(arr, n);
      }
   return 0;
}



