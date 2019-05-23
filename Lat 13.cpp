#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,c,n,i;
	cout<< "Masukan suku : ";
	cin>> n;

	for(i=1;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<< "Suku ke-"<<n <<" adalah : " << c;
}
