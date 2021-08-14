// TASK 1
// Referral Code : CPRSS1135
// Name : SHIVAM SHARMA

/* AIM: Take three numbers input from keyboard and print their values in descending order. 
(Like variable a, b and c has values 7, 10 and 5 then values will be printed in order 10, 7, 5). */

#include<iostream>
using namespace std;

int main(){
    int a[3]={},i;
    cout<<"Enter 3 Numbers: ";
    cin>>a[0]>>a[1]>>a[2];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            if(a[i]>a[j]){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" ";
    return 0;
}
