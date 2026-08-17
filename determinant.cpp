#include<iostream>
using namespace std;
int determinant(int a[3][3],int n) {
    if(n==2){
        return a[0][0]*a[1][1]-a[1][0]*a[0][1];
    }
    else{
    return a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
         - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
         + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
}
}
int main(){
    int arr[3][3],n;
    cout<<"enter the size of the matrix(2 or 3) :"<<endl;
    cin>>n;
     cout<<"enter the matrix elements\n";
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        
     }
    
    cout<<"determinant =  "<<determinant(arr,n); 
    return 0;

}
