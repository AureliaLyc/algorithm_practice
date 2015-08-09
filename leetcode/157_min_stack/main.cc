class MinStack {
public:
    void push(int x) {
        v.push_back(x);
        if (vMin.empty())
        {
            vMin.push_back(x);
        }
        else{
            int minX = vMin.back();
            vMin.push_back( min(minX, x));
        }
    }

    void pop() {
        v.pop_back();
        vMin.pop_back();
    }

    int top() {
        return v.back();
    }

    int getMin() {
        return vMin.back();
    }
    std::vector<int> v;
    std::vector<int> vMin;
};