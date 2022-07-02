/*
In this challenge, you will use a for loop to increment a variable through a range.

"Input Format"
You will be given two positive integers, a and b, separated by a newline.

"Output Format"
For each integer n in the inclusive interval [a,b]:

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9  and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
 
"Sample Input"
8
11
"Sample Output"
eight
nine
even
odd
*/
#include <iostream>
#include <cstdio>
using namespace std;
int x,y;
void name(int i)
{
    if (i==1
	){
        cout<<"one"<<endl;
    }
    else if (i==2)
	{
        cout<<"two"<<endl;
    }
    else if (i==3)
	{
        cout<<"three"<<endl;
    }
    else if (i==4)
	{
        cout<<"four"<<endl;
    }
    else if (i==5)
	{
        cout<<"five"<<endl;
    }
    else if (i==6)
	{
        cout<<"six"<<endl;
    }
    else if (i==7)
	{
        cout<<"seven"<<endl;
    }
    else if (i==8)
	{
        cout<<"eight"<<endl;
    }
    else if (i==9)
	{
        cout<<"nine"<<endl;
    }
}
void comp(int i)
{
    if ((i%2)==0)
	{
        cout<<"even"<<endl;
    }
    else
	{
        cout<<"odd"<<endl;
    }
}
int main()
{
    // Completing the code.
    
    cin>>x;
    cin>>y;
    for (int i=x; i<=y; i++)
    {
        if (i<10)
		{
            name(i);
        }
        else
        {
            comp(i);
        }
    }
    return 0;
}
