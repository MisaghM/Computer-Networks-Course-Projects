#ifndef DATETIME_HPP_INCLUDE
#define DATETIME_HPP_INCLUDE

#include <date.h>

#include <string>

class DateTime {
public:
    static std::string getDateTime();
    static std::string getServerDate();

    static bool setServerDate(const std::string& date);
    static void increaseServerDate(int days = 1);

    static bool isValid(const std::string& date);

private:
    static date::year_month_day serverDate_;
};

#endif // DATETIME_HPP_INCLUDE
