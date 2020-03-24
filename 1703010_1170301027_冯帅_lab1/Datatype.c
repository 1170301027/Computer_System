#include <stdio.h>
#include <string.h>
void datatypeArray();
void datatypeStruct();
void datatypeUnion();
void datatypeEnum();


int len = 0;
int i = 0;

char Char = 'a';
int Int = 1170301027;
float Float = 232.103;
double Double = 1999.0420;
long Long = 2298;
long long LongLong = 1234567890;

unsigned char UnChar = 'b';
unsigned int UnInt = 1703010;
unsigned long UnLong = 1027;

int x = 0;
char *Point = &Char;
int Array[2] = { 1, 2 };

struct Strcat {
	int newInt;
	float newFloat;
} Struct;

union data {
	int d;
	char c;
} Union;
enum Newenum { Feng, Shuai } Enum;
int *printfAddr = &printf;//printf地址
int *mainAddr;//main地址
unsigned char *p;
char string[256] = { "" };
char tempString[256] = { "" };

int main()
{

	Struct.newInt = 1;
	Struct.newFloat = 1.11;
	Union.d = 900;
	Union.c = 'd';
	Point = &x;
	mainAddr = &main;
	printf("%10s\t%10s%20s\t\t%s\n", "变量名", "内容", "地址", "16进制内存");
	printf("%10s\t%10c\t\t%p\t%x\n", "Char", Char, &Char, sizeof(Char));
	printf("%10s\t%10d\t\t%p\t%x\n", "Int", Int, &Int, sizeof(Int));
	printf("%10s\t%10f\t\t%p\t%x\n", "Float", Float, &Float, sizeof(Float));
	printf("%10s\t%10lf\t\t%p\t%x\n", "Double", Double, &Double, sizeof(Double));
	printf("%10s\t%10ld\t\t%p\t%x\n", "Long", Long, &Long, sizeof(Long));
	printf("%10s\t%10lld\t\t%p\t%x\n", "LongLong", LongLong, &LongLong, sizeof(LongLong));
	printf("%10s\t%10u\t\t%p\t%x\n", "UnChar", UnChar, &UnChar, sizeof(UnChar));
	printf("%10s\t%10u\t\t%p\t%x\n", "UnInt", UnInt, &UnInt, sizeof(UnInt));
	printf("%10s\t%10lu\t\t%p\t%x\n", "UnLong", UnLong, &UnLong, sizeof(UnLong));
	printf("%10s\t%10p\t%p\t%x\n", "Point", Point, &Point, sizeof(Point));
	datatypeArray();
	datatypeStruct();
	datatypeUnion();
	datatypeEnum();
	printf("%10s\t%10p\t%p\t%x\n", "mainAddr", mainAddr, &mainAddr, sizeof(mainAddr));
	printf("%10s\t%10p\t%p\t%x\n", "printfAddr", printfAddr, &printfAddr, sizeof(printfAddr));
	return 0;
}


void datatypeArray()
{
	printf("%10s\t ", "Array");
	for (i = 0; i < 2; i++)
	{
		printf("%4d ", Array[i]);
	}
	printf("\t\t");
	printf("%p\t", &Array);
	printf("%x\n", sizeof(Array));
}

void datatypeStruct()
{
	printf("%10s   ", "Struct");
	printf("%4d ", 6);
	printf("%4f\t\t", 7.73);
	printf("%p\t%x\n", &Struct, sizeof(Struct));
}

void datatypeUnion()
{
	printf("%10s\t ", "Union");
	printf("%4d ", Union.d);
	printf("%4c", Union.c);
	printf("\t\t");
	printf("%p\t", &Union);
	printf("%x\n", sizeof(Union));
}

void datatypeEnum()
{
	printf("%10s\t ", "Enum");
	for (i = 0; i < 2; i++)
	{
		printf("%4d ", i);
	}
	printf("\t\t");
	printf("%p\t", &Enum);
	printf("%x\n", sizeof(Enum));
}


