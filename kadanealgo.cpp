#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool divide(vector<int> arr){
    int maxi= INT16_MIN, prefix=0,totalSum=0, n=arr.size();
    for(int i=0;i<n;i++){
        totalSum+=arr[i]; 
    }
    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        int ans = totalSum-prefix;
        if(ans==prefix)
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    vector<int> v (n);
    cout<<"Enter array  elements"<< endl;
    for(int i=0; i<n; i++){
    cin>> v[i];
    }
    cout<< divide(v);
}
