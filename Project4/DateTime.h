#pragma once
struct Date
{
	int Day, Month, Year;
};
struct Time
{
	int hour, minute, second;
};
class DateTime
{
public:
	DateTime();
	DateTime(const DateTime& cpDT);
	DateTime(Date&, Time&);
	DateTime operator+(const DateTime& Zres);
	DateTime operator-(const DateTime& Zres);
	void Alarm(const DateTime& now, const DateTime alarm);
private:
	Date StartDate;
	Time StartTime;
};
