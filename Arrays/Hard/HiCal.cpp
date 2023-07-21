#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Meeting
{
private:
    unsigned int startTime_;
    unsigned int endTime_;

public:
    Meeting() : startTime_(0), endTime_(0)
    {
    }

    Meeting(unsigned int startTime, unsigned int endTime) : startTime_(startTime), endTime_(endTime)
    {
    }

    unsigned int getStartTime() const
    {
        return startTime_;
    }

    void setStartTime(unsigned int startTime)
    {
        startTime_ = startTime;
    }

    unsigned int getEndTime() const
    {
        return endTime_;
    }

    void setEndTime(unsigned int endTime)
    {
        endTime_ = endTime;
    }

    bool operator==(const Meeting& other) const
    {
        return startTime_ == other.startTime_ && endTime_ == other.endTime_;
    }
};

vector<Meeting> mergeRanges(const vector<Meeting>& meetings)
{
    vector<Meeting> sortedMeetings = meetings;
    sort(sortedMeetings.begin(), sortedMeetings.end(), [](const Meeting& a, const Meeting& b) {
        return a.getStartTime() < b.getStartTime();
    });

    vector<Meeting> mergedMeetings;
    for (const auto& currentMeeting : sortedMeetings) {
        if (mergedMeetings.empty()) {
            mergedMeetings.push_back(currentMeeting);
        } else {
            Meeting& lastMergedMeeting = mergedMeetings.back();
            if (currentMeeting.getStartTime() <= lastMergedMeeting.getEndTime()) {
                lastMergedMeeting.setEndTime(max(currentMeeting.getEndTime(), lastMergedMeeting.getEndTime()));
            } else {
                mergedMeetings.push_back(currentMeeting);
            }
        }
    }

    return mergedMeetings;
}

int main()
{
    const auto meetings = vector<Meeting>{Meeting(1, 3), Meeting(2, 4)};
    const auto actual = mergeRanges(meetings);

    for (const auto& meeting : actual) {
        cout << "Start time: " << meeting.getStartTime() << ", End time: " << meeting.getEndTime() << endl;
    }

    return 0;
}




// class Meeting
// {
// private:
//     // number of 30 min blocks past 9:00 am
//     unsigned int startTime_;
//     unsigned int endTime_;

// public:
//     Meeting() :
//         startTime_(0),
//         endTime_(0)
//     {
//     }

//     Meeting(unsigned int startTime, unsigned int endTime) :
//         startTime_(startTime),
//         endTime_(endTime)
//     {
//     }

//     unsigned int getStartTime() const
//     {
//         return startTime_;
//     }

//     void setStartTime(unsigned int startTime)
//     {
//         startTime_ = startTime;
//     }

//     unsigned int getEndTime() const
//     {
//         return endTime_;
//     }

//     void setEndTime(unsigned int endTime)
//     {
//         endTime_ = endTime;
//     }

//     bool operator==(const Meeting& other) const
//     {
//         return
//             startTime_ == other.startTime_
//             && endTime_ == other.endTime_;
//     }
// };

// ostream& operator<<(ostream& os, const Meeting& meeting)
// {
//     return os << "{ startTime: " << to_string(meeting.getStartTime())
//               << ", endTime: " << to_string(meeting.getEndTime()) << " }";
// }

// vector<Meeting> mergeRanges(const vector<Meeting>& meetings)
// {
//     // Step 3: Sort the meetings based on their start times
//     vector<Meeting> sortedMeetings = meetings;
//     sort(sortedMeetings.begin(), sortedMeetings.end(), [](const Meeting& a, const Meeting& b) {
//         return a.getStartTime() < b.getStartTime();
//     });

//     // Step 4: Initialize an empty vector to store the merged meetings
//     vector<Meeting> mergedMeetings;

//     // Step 5: Start iterating through the sorted meetings one by one
//     for (const auto& currentMeeting : sortedMeetings) {

//         // Step 6: Keep track of the last merged meeting in a separate variable.
//         // Initialize this variable with the first meeting in the sorted vector.
//         if (mergedMeetings.empty()) {
//             mergedMeetings.push_back(currentMeeting);
//         }
//         else {
//             Meeting& lastMergedMeeting = mergedMeetings.back();

//             // Step 7: For each meeting, check if it overlaps or is adjacent to the last merged meeting.
//             // If it does, update the end time of the last merged meeting to cover the new meeting's end time.
//             if (currentMeeting.getStartTime() <= lastMergedMeeting.getEndTime()) {
//                 lastMergedMeeting.setEndTime(max(currentMeeting.getEndTime(), lastMergedMeeting.getEndTime()));
//             }
//             // Step 8: If the current meeting does not overlap with the last merged meeting,
//             // add it to the vector of merged meetings.
//             else {
//                 mergedMeetings.push_back(currentMeeting);
//             }
//         }
//     }

//     // Step 9: Return the vector of merged meetings after the loop is complete.
//     return mergedMeetings;
// }



















// // tests

// const lest::test tests[] = {
//     {CASE("meetings overlap") {
//         const auto meetings = vector<Meeting> {Meeting(1, 3), Meeting(2, 4)};
//         const auto actual = mergeRanges(meetings);
//         const auto expected = vector<Meeting> {Meeting(1, 4)};
//         EXPECT(actual == expected);
//     }},

//     {CASE("meetings touch") {
//         const auto meetings = vector<Meeting> {Meeting(5, 6), Meeting(6, 8)};
//         const auto actual = mergeRanges(meetings);
//         const auto expected = vector<Meeting> {Meeting(5, 8)};
//         EXPECT(actual == expected);
//     }},

//     {CASE("meeting contains other meeting") {
//         const auto meetings = vector<Meeting> {Meeting(1, 8), Meeting(2, 5)};
//         const auto actual = mergeRanges(meetings);
//         const auto expected = vector<Meeting> {Meeting(1, 8)};
//         EXPECT(actual == expected);
//     }},

//     {CASE("meetings stay separate") {
//         const auto meetings = vector<Meeting> {Meeting(1, 3), Meeting(4, 8)};
//         const auto actual = mergeRanges(meetings);
//         const auto expected = vector<Meeting> {Meeting(1, 3), Meeting(4, 8)};
//         EXPECT(actual == expected);
//     }},

//     {CASE("multiple merged meetings") {
//         const auto meetings = vector<Meeting> {Meeting(1, 4), Meeting(2, 5), Meeting(5, 8)};
//         const auto actual = mergeRanges(meetings);
//         const auto expected = vector<Meeting> {Meeting(1, 8)};
//         EXPECT(actual == expected);
//     }},

//     {CASE("meetings not sorted") {
//         const auto meetings = vector<Meeting> {Meeting(5, 8), Meeting(1, 4), Meeting(6, 8)};
//         const auto actual = mergeRanges(meetings);
//         const auto expected = vector<Meeting> {Meeting(1, 4), Meeting(5, 8)};
//         EXPECT(actual == expected);
//     }},

//     {CASE("one long meeting contains smaller meetings") {
//         const auto meetings = vector<Meeting> {Meeting(1, 10), Meeting(2, 5), Meeting(6, 8),
//             Meeting(9, 10), Meeting(10, 12)};
//         const auto actual = mergeRanges(meetings);
//         const auto expected = vector<Meeting> {Meeting(1, 12)};
//         EXPECT(actual == expected);
//     }},

//     {CASE("sample input") {
//         const auto meetings = vector<Meeting> {Meeting(0, 1), Meeting(3, 5), Meeting(4, 8),
//             Meeting(10, 12), Meeting(9, 10)};
//         const auto actual = mergeRanges(meetings);
//         const auto expected = vector<Meeting> {Meeting(0, 1), Meeting(3, 8), Meeting(9, 12)};
//         EXPECT(actual == expected);
//     }},
// };

// int main(int argc, char** argv)
// {
//     return lest::run(tests, argc, argv);
// }