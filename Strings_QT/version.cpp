#include <QtCore>
#include <QTextStream>

int main(int argc, char ** argv)
{
    QTextStream out(stdout);

    /*
Part 1     
// Initializes the Qstring a to be love
    QString a = "love";

    // Appending of a string
    a.append(" chess!");
    // Prepending of a string
    a.prepend("I ");
    
    //using the standard out for QTextStream to print messages to the standard output.
    out << a << endl;
    out << "The '\a'\ string has " << a.count() << " characters" << endl;

    // Different methods available for the QTextStream
    out << a.toUpper() << endl;
    out << a.toLower() << endl;

    // Using the standard output stream to print QT Version
    out << "QT Version: " << qVersion() << endl; */

    /* // Part 2
    // Different Ways to initialize a string
    QString str1 = "The night train";
    out << str1 << endl;

    QString str2("A Yellow Rose");
    out << str2 << endl;

    std::string s1 = "A Blue Sky!";
    QString str3 = s1.c_str();
    out << str3 << endl;

    std::string s2 = "A Thick fog";
    QString str4 = QString::fromLatin1(s2.data(), s2.size());
    out << str4 << endl;

    char s3[] = "A deep forest";
    QString str5(s3);
    out << str5 << endl; */
    /*
    // Part 3
    QString a = "Eagle";

    // Accessing the first element of the string
    out << a[0] << endl;
    out << a.at(0) << endl;
    // Accessing the last element of the string
    out << a[4] << endl;
    out << a.at(4) << endl;

    // Checking if the index given in the at is null
    if (a.at(5).isNull())
    {
        out << "Outside the range of the string" << endl;
    }

    // checking if the index givenin the at is not null -- notice the ! before the conditional statement
    if (!a.at(4).isNull())
    {
        out << "This is a valid index of the string" << endl;
    }
*/

// Part 4: String Building
// When running this part of the code make sure you pass in at least 3 command line parameters

    QString s1 = "There are %1 white roses";
    int n = 12;
    out << s1.arg(n) << endl;

    QString s2 = "There are %1 m high";
    double h = 5.65;
    out << s2.arg(h) << endl;

    QString s3 = "We have %1 lemons and %2 oranges";
    int lemCount = 10;
    int orgCount = 5;
    out << s3.arg(lemCount).arg(orgCount) << endl;

    QString s4 = "My Name is %1 and I am a %2 %3";
    out << s4.arg(argv[1]).arg(argv[2]).arg(argv[3])<< endl;

    out << "I passed in " << argc -1 << " command line parmaeters." << endl;

    return 0;
}