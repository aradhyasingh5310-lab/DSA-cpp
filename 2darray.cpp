#include<iostream>
using namespace std;
void printcol(int arr[][4], int row, int col){
    for(int i=0; i<col;i++)
    for(int j=0; j<row;j++)
    cout<< arr[j][i]<<" ";

}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //row-wise printing
    for(int i=0; i<3;i++)
    for(int j=0; j<4;j++)
    cout<< arr[i][j]<<" ";
    //column-wise printing 
    printcol(arr,3,4);
}