#include <QtCore>
#include <QTextStream>

int main(int argc, char **argv)
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

    /* // Part 4: String Building
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

    out << "I passed in " << argc -1 << " command line parmaeters." << endl; */
    /* 
// Part 5: Substrings
    QString str = "My Name is Sparta!!";

    // Selects the 5 most right characters of the string
    out << str.right(5) << endl;
    // Selects the 9 most left characters of the string
    out << str.left(9) << endl;
    // Starting at the 4th Postion, takes the next 5 characters
    out << str.mid(4, 5) << endl;

    QString str2("The Big Apple");

    // Substring of str2 starting at position 0 and taking the next 7 characters
    QStringRef sub(&str2, 0, 7);

    // takes reference created by theQstring Ref and turns it into a string
    out << sub.toString() << endl;

 */

    /*   // Part 6: Looping Through Strings
    QString str = "There are Many Stars";
    // Utilizing a For Each Loop
    foreach (QChar qc, str)
    {
        out << qc << " ";
    }
    out << endl;

    // Utilizing an Iterator
    for (QChar *it = str.begin(); it != str.end(); ++it)
    {
        out << *it << " ";
    }
    out << endl;

    // Normal For Loop
    for (int i = 0; i < str.size(); i++)
    {
        out << str.at(i) << " ";
    }
    out << endl;
 */
    /* 
// Part 7: String Comparison
#define STR_EQUAL 0

    QString a = "Rain";
    QString b = "rain";
    QString c = "rain\n";

    if (QString::compare(a, b) == STR_EQUAL)
    {
        out << "Strings a and b are equal" << endl;
    }
    else
    {
        out << "Strings a and b are different" << endl;
    }

    out << "In Case insensitive Test: " << endl;

    if (QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL)
    {
        out << "Strings a and b are equal" << endl;
    }
    else
    {
        out << "Strings a and b are not equal" << endl;
    }

    if (QString::compare(b, c) == STR_EQUAL)
    {
        out << "Strings b and C are equal" << endl;
    }
    else
    {
        out << "Strings b and c are not equal" << endl;
    }

    c.chop(1);

    out << "After removing new Line Character: " << endl;

    if (QString::compare(b, c) == STR_EQUAL)
    {
        out << "Strings b and C are equal" << endl;
    }
    else
    {
        out << "Strings b and c are not equal" << endl;
    }
 */
    /* 
    // Part 8: Conversion of Strings

    QString s1 = "12";
    QString s2 = "14";
    QString s3, s4;

    // The Addition of s1 and s2
    out << s1.toInt() + s2.toInt() << endl;

    int n1 = 30;
    int n2 = 40;

    // Concatenation of ints that were changed to strings
    out << s3.setNum(n1) + s4.setNum(n2) << endl;
 */

    // Part 9: Categories of Characters.

    int digits = 0;
    int letters = 0;
    int spaces = 0;
    int puncts = 0;

    QString str1 = "My name is Willard Joseph. I am 35 year Old Software Engineer, I have 2 Beautiful Kids";

    foreach (QChar qc, str1)
    {
        if (qc.isDigit())
        {
            digits++;
        }
        else if (qc.isSpace())
        {
            spaces++;
        }
        else if (qc.isLetter())
        {
            letters++;
        }
        else if (qc.isPunct())
        {
            puncts++;
        }
    }

        out << "The String :\n"
            << str1 << endl;
        out << QString("Has a length of %1 Characters").arg(str1.count()) << endl;
        out << QString("Has %1 Letters, %2 Numbers, %3 Punctuations, and %4 Spaces").arg(letters).arg(digits).arg(puncts).arg(spaces) << endl;
        
        
        return 0;
    }