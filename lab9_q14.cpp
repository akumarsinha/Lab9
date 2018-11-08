#include <iostream>
using namespace std;
int main()
{
//declaring array
	char me[5]={'A','B','H','I','\0'};
	
	
//using index method
	cout <<"I am"<<endl;
	for(int n=0;n<5;n++)
		cout <<me[n];
//using pointers method
	
	cout <<"rockstar"<<endl;
	for(int n=0;n<5;n++) 
	cout<<*(me+n);
return 0;	
}
