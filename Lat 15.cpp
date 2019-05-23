#include<iostream>
using namespace std;
int main()
{
	int i=1, bil,xgenap=0, xganjil=0;
	cout<< "Masukan bilangan total : ";
	cin>> bil;
	cout<< endl;
	for(i=1;i<=bil;i++){
		cout << i << " ";
		if(i%2==0)
			xgenap=xgenap+1;
		
		else if(i%2!=0)
			xganjil=xganjil+1;
}
		cout<< "\n\nBilangan genap ada : "<< xgenap;
		cout<< "\nBilangan ganjil ada : "<< xganjil;
}
