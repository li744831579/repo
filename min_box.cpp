#include<iostream>
#include<vector>
using namespace std;
struct database{

		int one;
		int two;
		int three;
		int four;
		int five;
		int six;
		int sum;
};
int deal_num(int num)
{
	int count = num/36;
	int reminder = num%36;
	if(num == 0) return 0;
	if ( count == 0) return 1;
	while(reminder)
	{
	if ( reminder >=25 && reminder <36)	
	{
		count += reminder/25;
		reminder = reminder%25;
	}else if ( reminder >=16 && reminder<25)
	{
	
		count += reminder/16;
		reminder %=16;
	}else if ( reminder >= 9 && reminder < 16)
	{
		count +=reminder/9;
		reminder %=9;
	}else if ( reminder >=4 && reminder < 9)
	{
		count += reminder/4;
		reminder %=4;
	}
	else 
	{
		count += reminder;
			reminder = 0;
	}
	}
	
	return count;
		
	
		
	
}
void get_min_box()
{
	int num1,num2,num3,num4,num5,num6;
	vector<int>store;
	while(cin>>num1>>num2>>num3>>num4>>num5>>num6)
	{
		database data;
		if(num1||num2||num3||num4||num5||num6)
		{
			data.one=num1*1;
			data.two=num2*4;
			data.three=num3*9;
			data.four=num4*16;
			data.five=num5*25;
			data.six=num6*36;
			data.sum=data.one+data.two+data.three+data.four+data.five+data.six;
			store.push_back(data.sum);

		}
		else 
			break;
	}
	for (int i = 0; i < store.size(); i++)
	{
		cout <<deal_num(store[i])<<endl; 
	}

}
int main()
{
	get_min_box();
	return 0;
}
