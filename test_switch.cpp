#include<iostream>
using namespace std;
int main(){

	for ( int m = 1; m <15; m=m+2)
	{
	switch(m)
	{
		case  m>10: cout <<"big than 10"<<endl;break;
		case m>5&&m<10:cout <<"10>m>5"<<endl;break;
		case m>0&&m<5:cout<<"0<m<5"<<endl;break;
	}
	}
	return 0;
}
