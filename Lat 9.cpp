#include<iostream>
using namespace std;
int main()
{
	int n,a,x=4;
	cout<< "Masukan banyak bilangan : ";
	cin>> n;
	cout<<"-------------------------------\n";
	for(a=1;a<=n;a+=2) {
		cout << a << " ";
		cout << x << " ";
		x+=4;
	}
}
