// https://leetcode.com/problems/seat-reservation-manager/?envType=daily-question&envId=2023-11-06

#include <bits/stdc++.h>
using namespace std ;

class SeatManager {
private:
    int last;
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

public:
    SeatManager(int n) : last(0) {}

    int reserve() {
        if (pq.empty()) {
            return ++last;
        } else {
            int seat = pq.top();
            pq.pop();
            return seat;
        }
    }

    void unreserve(int seatNumber) {
        if (seatNumber == last) {
            --last;
        } else {
            pq.push(seatNumber);
        }
    }
};

int main () {
    
    return 0;
}