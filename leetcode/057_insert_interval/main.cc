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
        int size=intervals.size();
        if(size==0){
            intervals.push_back(newInterval);
            return intervals;
        }
        int left=0;
        int right=size;
        while(left<right){
            int mid=(left+right)/2;
            if(intervals[mid].start<newInterval.start)
                left=mid+1;
            else
                right=mid;
        }
        // left is not less than newInterval.
        if(left==0 && newInterval.end<intervals[0].start){
            intervals.insert(intervals.begin(), newInterval);
            return intervals;
        }
        if(left==size && newInterval.start>intervals[size-1].end){
            intervals.push_back(newInterval);
            return intervals;
        }
        if(newInterval.start>intervals[left-1].end && newInterval.end<intervals[left].start){
            intervals.insert(intervals.begin()+left, newInterval);
            return intervals;
        }
        if(left==0 && newInterval.end>=intervals[0].start){
            intervals[0].start=newInterval.start;
            intervals[0].end=max(newInterval.end, intervals[0].end);
        }
        else if(newInterval.start<=intervals[left-1].end){
            --left;
            intervals[left].end=max(intervals[left].end, newInterval.end);
        }
        else{
            intervals[left].start=newInterval.start;
            intervals[left].end=max(intervals[left].end, newInterval.end);
        }
        right=left+1;
        int end=intervals[left].end;
        while(right<size && end>=intervals[right].start){
            end=max(end, intervals[right++].end);
        }
        intervals[left].end=end;
        intervals.erase(intervals.begin()+left+1, intervals.begin()+right);
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