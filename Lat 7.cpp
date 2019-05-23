#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout<< "Masukan banyak bilangan genap : ";
	cin>> n;
	cout<<"-------------------------------\n";
	for(a=2;a<=n;a+=2)
	cout<< a << " ";
}
