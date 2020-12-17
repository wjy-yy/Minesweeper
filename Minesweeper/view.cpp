#include"view.h"

//对具体格子输出图像
void view::drawBlock(int x, int y, int t)
{
	IMAGE a;
	//10*10的格子范围在 40-440,220-620
	//每个格子大小为40*40
	//先处理特殊格子
	switch (t)
	{
	case -3:
		loadimage(&a, _T("mine.png"), 40, 40);
		break;
	case -2:
		loadimage(&a, _T("flag.png"), 40, 40);
		break;
	case -1:
		loadimage(&a, _T("uncover.png"), 40, 40);
		break;
	default:
		loadimage(&a, _T("empty.png"), 40, 40);//开过都先用白底
		break;
	}
	putimage(40 + y * 40, 220 + x * 40, &a);

	//旁边有地雷的就显示数量
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
	settextstyle(40,0,_T("Consolas"));

	LOGFONT f;
	gettextstyle(&f);
	f.lfQuality = ANTIALIASED_QUALITY;		// 设置输出效果为抗锯齿  
	f.lfWeight = 800;
	settextstyle(&f);						// 设置字体样式
	//outtextxy(0, 50, _T("抗锯齿效果"));
	if (t > 0)
		outtextxy(40 + y * 40+10, 220 + x * 40, (TCHAR)_T('0' + t));
}