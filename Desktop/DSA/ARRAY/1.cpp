#include <iostream>
using namespace std;

int main() 
{
    int arr[5]={10,20,30,40,50};
    int first=arr[0];
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[5]=first;
    cout<<"After left Rotation"<<endl;
     for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "<<endl;
    }
}