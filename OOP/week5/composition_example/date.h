#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date(int = 1, int = 1, int = 1900);
    void print() const;
    ~Date();

private:
    int mouth;
    int day;
    int year;

    int checkday(int) const;
};

#endif