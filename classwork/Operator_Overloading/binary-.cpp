 #include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize the Time object
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Overload the '-' operator to calculate time difference
    Time operator-(const Time& other) const {
        int h = hours - other.hours;
        int m = minutes - other.minutes;
        int s = seconds - other.seconds;

        if (s < 0) {
            s += 60;
            m--;
        }
        if (m < 0) {
            m += 60;
            h--;
        }

        return Time(h, m, s);
    }

    // Function to format the time
    string formatTime() const {
        return to_string(hours) + "h " + to_string(minutes) + "m " + to_string(seconds) + "s";
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);

    Time difference = time1 - time2;

    cout << "Time 1: " << time1.formatTime() << endl;
    cout << "Time 2: " << time2.formatTime() << endl;
    cout << "Time difference: " << difference.formatTime() << endl;

    return 0;
}
