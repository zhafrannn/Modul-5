#include<iostream>
using namespace std;
int main()
{
	int n,a=0,total;
	cout<< "Masukan bilangan faktorial : ";
	cin>> n;
	cout<<"-------------------------------\n";
	total = n;
	n=n-1;
	
	for(n;n>a;n--) {
		total = total * n;
	}
	
	cout << total << " ";
}
