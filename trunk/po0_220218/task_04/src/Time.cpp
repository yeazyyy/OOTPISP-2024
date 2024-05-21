#include "Time.h"

Time::Time(std::string_view timeString)
{
    std::stringstream ss(timeString.data());
    char tokenDelimiter;
    ss >> hours >> tokenDelimiter >> minutes >> tokenDelimiter >> seconds;
}

bool Time::operator==(const Time &other) const
{
    return ((this->hours == other.hours) && (this->minutes == other.minutes) && (this->seconds == other.seconds));
}
