/*
	Name:
	Copyright: 2021
	Author: @jahmjah
	Date: @date
	Description:
*/
// merge algorithm example
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
/*
int MergeArr(a1,a2){
    int i; j=1;
    int n = length a1 + length a2;
    int a3;
    for (k=1;k=n){
            if ( a[i] < a[j] )
                a3[k]= a1[i];
                i= i + 1;
    } else {
    a3[k] = a2[j];
    j = j + 1;
    }
    return a3;
} */
int a1[5]={5,10,15,20,25},a2[5]={50,40,30,20,10},a3[10];
//int MergeArr(a1,a2){
    int i,k, j=1;
    int n = 10; //length a1 + length a2;
    //int a3;
    for (i=0;i<=n;i++){
            if ( a1[i] < a2[i] ){
                a3[i]= a1[i];
cout << "--:  " << i << " " << a3[i] << "\n";
                //i= i + 1;
            } else {
            if ( a2[i] > a1[i] ) a3[i] = a2[i];
cout << "++:  " << i  << " " << a3[i] << "\n";
            //i = i + 1;
            }
    }
    for (i=0;i<n;i++){
    cout << "content:  " << a3[i] << "\n";
    }
//}

//MergeArr(ar1[5,10,15,20,25],ar2[50,40,30,20,10]);
//pause();
return 0;
}
