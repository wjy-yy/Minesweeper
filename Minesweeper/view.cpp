#include"view.h"

//�Ծ���������ͼ��
void view::drawBlock(int x, int y, int t)
{
	IMAGE a;
	//10*10�ĸ��ӷ�Χ�� 40-440,220-620
	//ÿ�����Ӵ�СΪ40*40
	//�ȴ����������
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
		loadimage(&a, _T("empty.png"), 40, 40);//���������ð׵�
		break;
	}
	putimage(40 + y * 40, 220 + x * 40, &a);

	//�Ա��е��׵ľ���ʾ����
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
	settextstyle(40,0,_T("Consolas"));

	LOGFONT f;
	gettextstyle(&f);
	f.lfQuality = ANTIALIASED_QUALITY;		// �������Ч��Ϊ�����  
	f.lfWeight = 800;
	settextstyle(&f);						// ����������ʽ
	//outtextxy(0, 50, _T("�����Ч��"));
	if (t > 0)
		outtextxy(40 + y * 40+10, 220 + x * 40, (TCHAR)_T('0' + t));
}