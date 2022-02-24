#include <iostream>
using namespace std;
int main ()
{
	int a, b, c;
	int *p1, *p2, *p3;
	
	a = 10;
	cout<<"\na = 10"<<endl;
	cout <<"Nilai a = " <<a<< endl;
	
	b = 15;
	cout<<"\nb = 15"<<endl;
	cout <<"Nilai b = " <<b<< endl;
	
	p1 = &b;
	cout<<"p1 = &b"<<endl;
	cout<<"Nilai &b = "<<&b<< endl;
	cout<<"Nilai p1 = "<<p1<< endl;
    
	p2 = p1;
	cout<<"\np2 = p1"<<endl;
	cout<<"Nilai p1 = "<<p1<< endl;
	cout<<"Nilai p2 = "<<p2<< endl;
    
	c = 27;
	cout<<"\nc = 27"<<endl;
	cout <<"nNilai c = " <<c<< endl;
	
	p1 = &c;
	cout<<"\np1 = &c"<<endl;
	cout <<"Nilai &c = " <<&c<< endl;
	cout <<"Nilai p1 = " <<p1<< endl;

	a = *p1;
	cout<<"\na = *p1"<< endl;
	cout<<"Nilai *p1 = "<<*p1<< endl;
	cout<<"Nilai a = "<<a<< endl;

	p3 = &b;
	cout<<"\np3 = &b"<<endl;
	cout <<"Nilai b = " <<b<< endl;
	cout <<"Nilai p3 = " <<p3<< endl;
    
	*p2 = 8;
	cout<<"\n*p2 = 8"<<endl;
	cout <<"Nilai *p2 = " <<*p2<< endl;
    
return 0;
}
