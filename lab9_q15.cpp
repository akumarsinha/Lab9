//including the library
#include <iostream>
using namespace std;
int main()
{
    char sir[11];
	 char* charptr;
    cout<<"Enter 10 characters of string"<<endl;
    cin>>sir;
    charptr=&sir[0];
    for(int i=0;i<=10;i++)
   {
    	for(int j=i;j<=10;j++)
    	{
            cout<<*(charptr+j);
    	}
      cout<<endl;
    }
//returning the main function
    return 0;
}
