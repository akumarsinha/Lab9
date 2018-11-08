//including the library
#include <iostream>
using namespace std;

int main(){
	//integral variable
	int a =2,b=3;
	int *p;
	p=&a;
	b=*p;
	//print a
	cout<<a<<endl;
	//print b
	cout<<b<<endl;
	//print p
	cout<<*p<<endl;
	a =2,b=3;
	//assigning pointer p to b
	p=&b;
	//print a
	cout<<a<<endl;
	//print b
	cout<<b<<endl;
	//print p
	cout<<*p<<endl;
//returning the main function
return 0;
}

