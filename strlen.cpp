#include<iostream>
using namespace std;
size_t strlen(char const *str)
{
	size_t size=0;
	if(str == NULL)
		return 0;
	while(*str != '\0')
	{
		size++;
		str++;
	}
	return size;

}
char* strcpy(char *dst,char const *src)
{
	cout << "dst = "<<dst<<endl;
	if (src == NULL)
		return NULL;
	int size=strlen(src)+1;
	dst = new char[size];
	if (dst == NULL)
		return NULL;
	for (int i = 0; i < size-1;i++ )
		dst[i]=src[i];
	dst[size-1]='\0';
	return dst;

}
void strcpy2(char *dst,char const *src)
{
	int size=strlen(src)+1;
	for ( int i = 0; i < size-1; i++)
		dst[i]=src[i];
	dst[size-1]='\0';
}
int main(){
	char *string="hello world";
	cout <<"The sizeof string is"<< strlen(string)
		<<"\tsizeof(string)"<<endl;
	
	char *str1;
	cout <<"str1"<<str1<<endl;
char *p1 = strcpy(str1,string);
	cout <<"strlen(str1)= " << strlen(p1)<<endl;
	cout<< *p1<<endl;
	char *str2=new char[12];
	strcpy2(str2,string);
	cout << *str2<<endl;
	return 0;
}

