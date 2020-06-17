#include <QTextStream>
#include <QTime>
#include <QDate>

int main(void)
{
    QTextStream out(stdout);
    /* 
// PART 1: Introdution to Time and Date
    QDate dt1(2020, 6, 17);
    out << "The date is " << dt1.toString() << endl;

    QDate dt2;
    dt2.setDate(1984, 9, 18);
    out << "My Birthday is " << dt2.toString() << endl;

    QTime tm1(13, 2, 45, 120);
    out << "The Time is " << tm1.toString("hh:mm:ss.zzz") << endl;

    QTime tm2;
    tm2.setHMS(13, 5, 20, 43);
    out << "The Time is " << tm2.toString("hh:mm:ss.zzz") << endl;
     */

    // Part 2: Accessing Current Date and Time

    /*     // Getting the Current Date
    QDate cd = QDate::currentDate();
    // Getting the current time
    QTime ct = QTime::currentTime();

    out << "The Current Date is " << cd.toString() << endl;
    out << "The Current Time is " << ct.toString("hh:mm:ss.zzz") << endl;
    out << "The Current Time is " << ct.toString() << endl; */

    // Part 3: Comparing Dates

    /*   QDate dt1(1984, 9, 18);
    QDate dt2(1989, 3, 24);

    if (dt1 < dt2)
    {
        out << dt1.toString() << " comes before " << dt2.toString() << endl;
    }
    else
    {
        out << dt1.toString() << " comes after " << dt2.toString() << endl;
    } */

    // Part 4: Deteremintation of a Leap Year and Introduction to some Storage Components in QT

   /*  QList<int> years({2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020});

    foreach (int yr, years)
    {
        if (QDate::isLeapYear(yr))
        {
            out << "The Year " << yr << " was a Leap Year." << endl;
        }else
        {
            out << "The Year " << yr << " was not a Leap Year." << endl;
        }
        
    } */

    // Part 5: Date Formats ** Look at Reference for Time Formats and Custom Formats
   /* QDate cd = QDate::currentDate();
     out << "Today is " << cd.toString(Qt::TextDate) << endl;
    out << "Today is " << cd.toString(Qt::ISODate) << endl;
    out << "Today is " << cd.toString(Qt::SystemLocaleShortDate) << endl;
    out << "Today is " << cd.toString(Qt::SystemLocaleLongDate) << endl;
    out << "Today is " << cd.toString(Qt::DefaultLocaleShortDate) << endl;
    out << "Today is " << cd.toString(Qt::DefaultLocaleLongDate) << endl;
    out << "Today is " << cd.toString(Qt::SystemLocaleDate) << endl;
    out << "Today is " << cd.toString(Qt::LocaleDate) << endl; */

    // Part 6: Retrieving the weekday

   /*  QDate cd = QDate::currentDate();
    int wd = cd.dayOfWeek();

    out << "The Weed Day value is " << wd << endl;
    out << "Today is " << QDate::shortDayName(wd) << endl;
    out << "Today is " << QDate::longDayName(wd) << endl; */

    // Part 7: Days To, Days From
    QDate dt = QDate::currentDate();
    QDate nd = dt.addDays(70);

    QDate bD(1984, 9, 18);
    QDate mBday(1991, 5, 24);
    QDate cMas(2020, 12, 25);

    out << "70 Days from today will be " << nd.toString(Qt::SystemLocaleLongDate) << endl;
    out << "There are " << QDate::currentDate().daysTo(bD) << " day to my Birthday." << endl;
    out << "There are " << mBday.daysTo(bD) << " day to Monique's Born Day." << endl; 

    return 0;
}