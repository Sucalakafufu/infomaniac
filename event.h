#ifndef EVENT_H
#define EVENT_H

#include <QString>

class Event
{
public:
    Event();

private:
    QString name,
            location,
            startTime,
            endTime,
            startDate,
            endDate;
};

#endif // EVENT_H
