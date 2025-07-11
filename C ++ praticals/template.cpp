//example for template

#include<iostream>
using namespace std;
template <typename T>

T findMax(T a , T b)
{
	return a>b ? a:b;
}
main()
{
	cout <<findMax<int>(12,85)<<"\n";
	cout << findMax<float>(12.5,18.7)<<"\n";
	cout << findMax<char>('a','u');
}
