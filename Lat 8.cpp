#include<iostream>
using namespace std;
int main()
{
	int n,a,x=1;
	cout<< "Masukan banyak bilangan : ";
	cin>> n;
	cout<<"-------------------------------\n";
	for(a=1;a<=n;a++) {
		if (a % 2 != 0) {
			if (x % 2 == 0) {
				cout<< "-"<<a<< " ";		
			} else {
				cout<< a << " ";			
			}
			x++;
		}
	}
}

