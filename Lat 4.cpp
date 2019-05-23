#include<iostream>
using namespace std;
int main()
{
	int i,x,f, n;
	cout<< "Masukan banyak variasi nilai 'x' : ";
	cin>> n;
	cout<< "____________________________________\n";
	for(i=1;i<=n;i++){
		cout<< "Masukan Nilai x : ";
		cin>>x;
		f=(x*x)-(2*x)-8;
		cout<< "Nilai fungsinya adalah : "<< f;
		cout<< endl << endl;	
	}
}
