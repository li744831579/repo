//#ifdef SDS_H
//#define SDS_H
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
};*/

class sdshdr{

	public:
		sdshdr():len(0),free(0),buf(NULL){}
		sdshdr(int l,int f):len(l),free(f),buf(new char[l]){}
		int const getlen()const{
		return len;
   					}
		const int getfree()const{return free;}
		void relen(int size){ len = size;}
		void refree(int fsize){ free = fsize;}
		void realloc();
		void sdsMakeRoomFor(int required_len);
		

	private:
		int len;
		int free;
		char *buf;
};
//#endif
