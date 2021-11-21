#include "DateTime.h"
#include <ctime>

DateTime::DateTime()
{/*
	std::time_t now = std::time(0);
	std::tm * ltm = std::localtime(&now);
	ltm -> tm_mday;*/
}
DateTime::DateTime(const DateTime& cpDT)
{
	StartDate = cpDT.StartDate;
	StartTime = cpDT.StartTime;
}
DateTime::DateTime(Date& _Date, Time& _Time)
{
	StartTime = _Time;
	StartDate = _Date;
}
DateTime DateTime::operator+(const DateTime& _res)
{
	Date _d = {StartDate.Day + _res.StartDate.Day, StartDate.Month + _res.StartDate.Month, StartDate.Year + _res.StartDate.Year};
	Time _t = {StartTime.hour + _res.StartTime.hour, StartTime.minute, StartTime.second + _res.StartTime.second};
	
	return DateTime(_d, _t);
}
DateTime DateTime::operator-(const DateTime& Zres)
{
	return DateTime();
}
void DateTime::Alarm(const DateTime& now, const DateTime alarm)
{

}
