/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static bool comp(Interval& a, Interval&b){
        return a.start<b.start;
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        int size=intervals.size();
        vector<Interval> res;
        for(int i=0; i<size;){
            res.push_back(intervals[i++]);
            while(i<size && res.back().end>=intervals[i].start) {
                res.back().end=max(res.back().end, intervals[i].end);
                ++i;
            }
        }
        return res;
    }
};