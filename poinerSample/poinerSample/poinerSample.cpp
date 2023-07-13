// #include <iostream>  // C++

#include <stdio.h>
#include <malloc.h>

char buf[100];
void MemoryDump(int start, int length); // 함수의 원형 Prototype

int main(int argc, char *argv[])	// >PointerSample 10000 500 : //Command Line 명령어
									//  10000 : Start memory 주소
									//  500   : Dump 할 메모리 크기
{
	int start = 0x09000000;
	int length = 500;

	char c = 'A';
	int i = 1;
	float a = 2.0;
	double d = 3.14;
	void *p = malloc(100);//(void*) buf//0x80000000;  // 그저 주소일 뿐...

	*(double *)p = d;

	MemoryDump((int)buf, length);
	//printf("c = %8c  [0x%08x]\n", c, &c);
	//printf("i = %8d  [0x%08x]\n", i, &i);
	//printf("f = %8f  [0x%08x]\n", a, &a);
	//printf("d = %8f  [0x%08x]\n", d, &d);
	//printf("p = %8f  [0x%08x]\n", *(double*)p, p);
}

void MemoryDump(int start, int length)
{
	char *cp = buf;// (char *)start;
	//void *vp = (void *)start;
	int i = 0;	// index 변수 초기값
	
	while(i < length)  // 수행조건 :  i < length
	{
		//char *cp = (char *)vp;
		//char c = *cp;
		unsigned char c = *((char *)cp+i++);
		//i++;
		printf("%02x  ", c);
	}
	//for 
	//do {}while
}


