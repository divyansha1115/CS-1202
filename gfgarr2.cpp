#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    //cout << arr[2]<<" "<< arr[3/2]<< " "<<arr[-2];
    int i= sizeof(arr);
    cout<< i <<"\n"<<endl;
    int j = sizeof(arr[0]);
    cout<<j;
	return 0;
}