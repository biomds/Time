#ifndef TIME_H
#define TIME_H

class Time
{
public:
	explicit Time(int=0, int=0, int=0);
	void setTime(int, int, int);
	unsigned int getHour() const;
	unsigned int& badSetHour(int);
private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
};
#endif // !TIME_H

