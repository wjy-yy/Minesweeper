#pragma once
#include<easyx.h>
class view
{
private:
	int h, w;
public:
	view(int h, int w) :h(h), w(w)
	{
		initgraph(h, w);
	}
	~view()
	{
		closegraph();
	}
	void drawBlock(int x, int y, int k);
};