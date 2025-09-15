#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"ENTER THE SIZE OF ARRAY :";
    cin>>n;
    cout<<"ENTER THE elements OF ARRAY :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // BUBBLE SORT
    for(int i=n-1;i<=1;i++){
       for(int j=0;j<=i-1;j++){
        int sort=0;
        if(arr[j+1]<arr[j]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            sort=1;

        }
        if(sort==1){
            break;
        }
       }
        }

    

    cout<<"NEW ARRAY IS :-";
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }

}