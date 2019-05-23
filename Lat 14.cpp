#include<iostream>
using namespace std;
int main()
{
int bil, total=0, terbesar, terkecil, i, n;
 
 cout<<"Masukkan banyaknya bilangan : "; 
 cin>>n;
 for(i=1; i<=n; i++){
  cout<<"Masukkan bilangan : "; 
  cin>>bil;
  
  if(i==1){
   terbesar=bil;
   terkecil=bil;
  }
  
  else if(terkecil>bil)
  terkecil=bil;
  
  else if (terbesar<bil)
  terbesar=bil;
  
  else { } 
  
 }
 
 cout<<"\nBilangan Terbesar = "<<terbesar;
 cout<<"\nBilangan Terkecil = "<<terkecil;
 
}
