#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,c,n,i;
	cout<< "Masukan banyak suku : ";
	cin>> n;
	cout<< "Bilangannya adalah : ";
	cout<< a << " " << b << " ";
	for(i=1;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
		
		cout<<c << " ";
	}
	
}
