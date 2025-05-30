#include<iostream>
using namespace std;
int main()
{

int i, n, total=0;
cout<<"Masukkan batas atas bilangan: ";
cin>>n;
for(i=0; i<n; ++i)
{

cout<<i<<" ";
total+=i;

}
cout<<endl<<total;

}
