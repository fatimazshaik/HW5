//
// Created by Fatima Shaik on 10/17/22.
// Header file for Record

#ifndef UHW_2_RECORD_H
#define UHW_2_RECORD_H

#include "Person.h"
#include "JvTime.h"
#include "GPS.h"
#include "Thing.h"

#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>


class Record {
private:
    Thing thingOne;
    Thing thingTwo;
    Person personOne;
    Person personTwo;
    GPS location;
    JvTime time;

public:
    explicit Record(Thing item1, Person person1, GPS loc, JvTime time);
    explicit Record(Thing item1, Thing item2, Person person1, Person person2, GPS loc, JvTime time1);
    explicit Record(Person person1, Person person2, GPS loc, JvTime time);
    explicit Record( Person person1, GPS loc, JvTime time);
    explicit Record();

    Json::Value dump2JSON();
    int myParseJSON (std::string input, Json::Value * jv_ptr);
    int myJSON2File(char *f_name, Json::Value * jv_ptr);
    char * myFile2String(char *f_name);
    int myFile2JSON (char *f_name, Json::Value * jv_ptr);
};


#endif //UHW_2_RECORD_H
