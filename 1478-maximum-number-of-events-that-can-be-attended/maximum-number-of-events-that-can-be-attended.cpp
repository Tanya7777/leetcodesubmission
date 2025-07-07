class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());

        priority_queue<int, vector<int>, greater<int>> pq;
        int i = 0, n = events.size(), day = 1, count = 0;

        // Find the last end day
        int maxDay = 0;
        for (auto& e : events) maxDay = max(maxDay, e[1]);

        while (day <= maxDay) {
            // Add events that start today
            while (i < n && events[i][0] == day) {
                pq.push(events[i][1]); // store endDay
                i++;
            }

            // Remove events already expired
            while (!pq.empty() && pq.top() < day) {
                pq.pop();
            }

            // Attend the event that ends the earliest
            if (!pq.empty()) {
                pq.pop();
                count++;
            }

            day++;
        }

        return count;
    }
};
