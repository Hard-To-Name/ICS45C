#include<iostream>
using namespace std;

class String
{
private:
	static int allocations;
	static char* new_char_array(int n_bytes);
	static void delete_char_array(char* p);
	bool inBound(int i);
	static int strlen(const char* s);
	static char* strcpy(char* dest, const char* src);
	static char* strcat(char* dest, const char* src);
	static int strcmp(const char* left, const char* right);
	static int strncmp(const char* left, const char* right, int n);
	static char* strchr(char* str, int c);
	static const char* strstr(const char *haystack, const char *needle);
	static char* strstr(char *haystack, const char *needle);
	static char *strdup(const char *src);
	static void reverse_cpy(char* dest, const char* src);
	char *buf;

public:
	explicit String(const char* s = "")
	{
		buf = strdup(s);
	}
	String(const String& s);
	String operator = (const String& s);
	char& operator [] (int index);
	int size();
	String reverse();
	int indexOf(const char c);
	int indexOf(const String pattern);
	bool operator == (const String s);
	bool operator != (const String s);
	bool operator > (const String s);
	bool operator < (const String s);
	bool operator <= (const String s);
	bool operator >= (const String s);
	String operator + (const String s);
	String operator += (const String s);
	void print(ostream& out);
	void read(istream& in);
	static void final_report();
	~String();
};
ostream& operator << (ostream& out, String str);
istream& operator >> (istream& in, String& str);