#include<iostream>
#include<cstring>
using namespace std;
char *findstr(char*str1,char*str2)//查看str1中是否包含str2,如果包含返回第一次出现的指针，如果不包含，返回NULL
{
	const char* curr=str2;
	while(*str1 != '\0')
	{
		if ((*curr!='\0')&&(*str1 == *curr))
		{
			str1++;
			curr++;
			continue;
		}else if (*curr == '\0')
		{
			return str1-strlen(str2);
		}else 
		{
			curr = str2;
		}
		str1++;

	}	
	return NULL;

}
int main()
{
	char *s = findstr("hello world","wol"); 
	if ( *s != NULL)
	cout << *s <<endl;
	else 
		cout <<"不匹配"
	return 0;
}
