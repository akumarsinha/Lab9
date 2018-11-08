//including the library
#include <iostream>
using namespace std;

int main(){
//predefining the variables
//integral variable
	int a;int *p =&a; cout<<"The size of integer variable is "<<sizeof(a)<<endl<<"The size of integer pointer variable is "<<sizeof(p)<<endl;
//character variable
	char b;char *q =&b;cout<<"The size of character variable is "<<sizeof(b)<<endl<<"The size of character pointer variable is "<<sizeof(q)<<endl;
//float variable
	float c;float *r =&c;cout<<"The size of float variable is "<<sizeof(c)<<endl<<"The size of float pointer variable is "<<sizeof(r)<<endl;
//double variable
	double d;double *s =&d;cout<<"The size of double variable is "<<sizeof(d)<<endl<<"The size of double pointer variable is "<<sizeof(s)<<endl;
//boolean variable
	bool e;bool *t =&e;cout<<"The size of boolean variable is "<<sizeof(e)<<endl<<"The size of boolean pointer variable is "<<sizeof(t)<<endl;
// returning the main function
return 0;
}
