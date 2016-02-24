class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        int size=intervals.size();
        int l=0, r=size;
        // find the first Interval which would merge with newInterval.
        while(l<r){
            int m=(l+r)/2;
            if(intervals[m].end<newInterval.start)
                l=m+1;
            else
                r=m;
        }
        int left=l; r=size;
        // find the first Interval which would not merge with newInterval.
        while(l<r){
            int m=(l+r)/2;
            if(intervals[m].start<=newInterval.end)
                l=m+1;
            else
                r=m;
        }
        // if they are the same, then means no overlap. just insert.
        if(left==r)
            intervals.insert(intervals.begin()+r, newInterval);
        // has overlap. Merge them by finding the min(start) and max(end). 
        // Then erase the Intervals between left+1 to r.
        else{
            intervals[left].start=min(intervals[left].start, newInterval.start);
            int t=max(intervals[left].end, newInterval.end);
            intervals[left].end=max(t, intervals[r-1].end);
            intervals.erase(intervals.begin()+left+1, intervals.begin()+r);
        }
        return intervals;
    }
};

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
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        vector<Interval> res;
        int size=intervals.size();
        res.reserve(size+1);
        res.push_back(newInterval);
        for(int i=0; i<size; ++i){
            if(intervals[i].end<res.back().start){
                res.insert(res.end()-1, intervals[i]);
            }
            else if(intervals[i].start>res.back().end){
                res.push_back(intervals[i]);
            }
            else{
                res.back().start=min(intervals[i].start, res.back().start);
                res.back().end=max(intervals[i].end, res.back().end);
            }
        }
        return res;
    }
};