//
// Created by Teni on 10/10/2022.
//


#ifndef HW2_JVTIME_H
#define HW2_JVTIME_H

    #include <strings.h>
    #include <string>
    #include <iostream>
    #include <stdio.h>
    #include <iomanip>
    #include <cstdlib>
    #include <sstream>
    #include <ctime>
    #include <exception>
    #include <cstring>


    // for Json::value
    #include <json/json.h>
    #include <json/reader.h>
    #include <json/writer.h>
    #include <json/value.h>

    using namespace std;

    class JvTime {
    private:
    public:
        bool validTimeFormat;
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
        char tail4[64];

        JvTime(const char *);
        JvTime();

        struct std::tm * getStdTM();
        int setStdTM(struct std::tm *);
        std::string * getTimeString();
        Json::Value dump2JSON();

    };

    JvTime * getNowJvTime();

#endif //HW2_JVTIME_H
