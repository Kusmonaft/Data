#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <io.h>
#include<vector>
#include <fstream>

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date(int d, int m, int y) : day(d), month(m), year(y) {}
    Date operator++() {
        day++;
        return *this;
    }

    Date operator--() {
        day--;
        return *this;
    }

    bool operator==(const Date& other) const { return day == other.day && month == other.month && year == other.year; }

    bool operator!=(const Date& other) const { return !(*this == other); }

    bool operator>(const Date& other) const {
        if (year > other.year) {
            return true;
        }
        if (year == other.year && month > other.month) { return true; }
        if (year == other.year && month == other.month && day > other.day) { return true; }
        return false;
    }

    bool operator<(const Date& other) const { return !(*this > other) && !(*this == other); }

    friend ostream& operator<<(ostream& os, const Date& date) {
        os << date.day << "/" << date.month << "/" << date.year;
        return os;
    }

    friend istream& operator>>(istream& is, Date& date) {
        is >> date.day >> date.month >> date.year;
        return is;
    }
};