#include<iostream>
using namespace std;
class Clock
{
public:
	void setTime(int newT = 0, int newM = 0, int newS = 0);//��Ա��������Ĭ��ֵһ��Ҫд���ඨ���У�����д����Ķ���֮��ĺ���ʵ�֡�
	void showTime();
private:
	int hour, minute, second;
};
void Clock::setTime(int newT, int newM, int newS)
{
	hour = newT;
	minute = newM;
	second = newS;
}
inline void Clock::showTime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}
int main()
{
	Clock myclock;
	cout << "First time set and output : "<<endl;
	myclock.setTime();
	myclock.showTime();
	cout << "Second time set and output:" << endl;
	myclock.setTime(8, 30, 30);
	myclock.showTime();
	return 0;
}
//�������ں���������Ȼ�������ⶨ�庯�����������Ա�����ı�ʾ��ʽ ����::������
//���������е��ö����Ա��������ʾΪ  ������.��Ա������