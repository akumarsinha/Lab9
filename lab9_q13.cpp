//including library
#include <iostream>
using namespace std;

int main(){
	int arr[10]={1,7,8,19,23,38,66,88,2,4};
	//printing the array
	//using normal index method
	for(int i=0;i<10;i++){
		cout<<arr[i]<<",";
		}
	cout<<endl;
	//using the pointer method
	int *p= arr;
	for(int i=0;i<10;i++){
		cout<<*(p+i)<<",";
}
//returning the main function		
return 0;
}
