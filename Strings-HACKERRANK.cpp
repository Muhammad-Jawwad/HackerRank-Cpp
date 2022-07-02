/* 
C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:
Declaration: string a = "abc";
Size: int len = a.size();
Concatenate two strings:-
string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
Accessing i th element:-
string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'
s[0] = 'z';         // s = "zbc" 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin>>a>>b;
  cout<<a.size()<<' '<<b.size()<<endl;
  cout<<a+b<<endl;
  char a0 = a[0] , b0 = b[0];
  a[0] = b0;
  b[0] = a0;
  cout<<a<<' '<<b;
  

  
    return 0;
}
