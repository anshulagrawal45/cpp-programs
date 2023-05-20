#include<iostream>
#include<climits>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    int array[10]={1,2,2,3,3,3,5,5,5,5};
    int n;
    cin>>n;
    int count;
    vector<int> arr;
    for(int i=0; i<n; i++){
        if(i!=INT_MIN){
            for(int j=0; j<n; j++){
                if(array[i]==array[j]){
                    count++;
                }
            }
        }
        array[i]=INT_MIN;
        arr.push_back(count);
        count=0;
    }
    cout<<arr[0];
}