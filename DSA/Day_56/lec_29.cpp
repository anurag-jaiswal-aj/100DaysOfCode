#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;

    int col;
    cout<<"Enter the number of column:"<<endl;
    cin>>col;

    //creation 2d array
    int** arr = new int*[row];
    for(int i = 0;i<row;i++){
        arr[i] = new int[col];
    }
    
    //taking input
    cout<<"Enter the elements of array:"<<endl;
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>> arr[i][j];
        }
    }
    cout<<endl;

    //taking output
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<< arr[i][j]<< " ";
        }
        cout<<endl;
    }


    return 0;
}