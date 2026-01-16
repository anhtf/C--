#include <iostream>
#include <ctime>

typedef struct 
{
    int year;
    int month;
    int day;
} time_struct;

enum class date_time_base
{
    MONTH = 1,
    HOURS = 7,
    YEAR = 1900,

};

int main()
{
    time_struct tm_struct;
    date_time_base base_year = date_time_base::YEAR;
    date_time_base base_month = date_time_base::MONTH;
    date_time_base base_hours = date_time_base::HOURS;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    char *dt = ctime(&now);

    tm_struct.year = ltm->tm_year + (int)base_year;
    tm_struct.month = ltm->tm_mon + (int)base_month;
    tm_struct.day   = ltm->tm_mday;
    char today[50];
    snprintf(today, 50, "Today is %d/%d/%d\n", tm_struct.day, tm_struct.month, tm_struct.year);
    std::cout << today << std::endl;
    std::cout << "The local date and time is: " << dt << std::endl;

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    std::cout << "The UTC date and time is:" << dt << std::endl;
}