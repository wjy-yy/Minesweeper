#include<cstdio>
#include<iostream>
#include"view.h"
using namespace std;
int main()
{
	view v(480, 640);
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
			v.drawBlock(i, j, (i+j)%5-3);
	cin.ignore();
	
}