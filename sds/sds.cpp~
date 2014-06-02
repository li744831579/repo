#include"sds.h"
/*void sdsMakeRoomFor(struct sdshdr &sds_str,int required_len)
{
	if(sds_str.free >= required_len)
		return ;
	int newlen = sds_str.len + required_len;//取得新字符串所需要的长度
	if( newlen > SDS_MAX_PREALLOC)
		newlen  *= 2;
	else 
		newlen += SDS_MAX_PREALLOC;
		
	
	//sds newbuf = new char[newlen];
	memncpy();

}*//*
#include<iostream>
#include<memory>
#include<cstring>
#define SDS_MAX_PREALLOC 20
typedef char* sds;
/*struct sdshdr{
	sdshdr(int size)
	int len;// buf 已占用长度
	int free;// buf 剩余可用长度
	char buf*;// 实际保存字符串数据的地方。
};
*/
class sdshdr;
using namespace std;
void sdshdr::realloc()
{

			char* newbuf = new char[len];
			memcpy(newbuf,buf,strlen(buf)+1);
			delete[] buf;
			buf = newbuf;

}
void sdshdr::sdsMakeRoomFor(int required_len)
{

}
int main()
{
	return 0;
}
