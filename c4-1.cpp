#include<iostream>
using namespace std;
class Clock
{
public:
	void setTime(int newT = 0, int newM = 0, int newS = 0);//成员函数参数默认值一定要写在类定义中，不能写在类的定义之外的函数实现。
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
//先在类内函数声明，然后在类外定义函数，在类外成员函数的表示形式 类名::函数名
//在主函数中调用对象成员函数，表示为  对象名.成员函数名