#include<iostream>
#include<climits>
using namespace std;
void printArray(int array[], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return ;
}
int maxArray(int array[], int n){
    int maxi;
    maxi = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        maxi = max(array[i],maxi);
    }
    return maxi;
}
int sumArray(int array[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    return sum;
}
int linearsearch(int array[],int n){
    int num;
    cout<<"Enter Number to search ";
    cin>>num;

    for(int i=0;i<n;i++){
        if(num==array[i]){
            return 1;
        }
    }
    return 0;
}
void reverseArray(int array[],int n){
    int start=0,end=n-1;
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
    return ;
}
int main(){
    int array[100];
    int size;
    cout<<"Size of array ";
    cin>>size;
    //taking input as array
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    //Max
    // cout<<maxArray(array,size);
    //sum
    // cout<<sumArray(array,size);
    // liner search
    // int ans=linearsearch(array,size);
    // if(ans){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not found";
    // }
    //reverse array
    reverseArray(array,size);
    printArray(array,size);
    return 0;
}