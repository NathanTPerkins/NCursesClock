#include <clock.h>

char * getTime(){
    char * str_time = (char *)malloc(sizeof(char) * 80);
    time_t c_time;
    time(&c_time);
    struct tm * timeinfo;
    timeinfo = localtime(&c_time);
    strftime(str_time, 20, "%-I:%M %p", timeinfo);
    return str_time;
    
}