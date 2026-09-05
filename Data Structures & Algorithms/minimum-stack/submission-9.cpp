class MinStack {
public:
std::vector<int> xyz;
    MinStack() {
        
    }
    
    void push(int val) {
        xyz.push_back(val);
    }
    
    void pop() {
        xyz.pop_back();
    }
    
    int top() {
        return xyz.back();
    }
    
    int getMin() {
        return *(std::min_element(xyz.begin(),xyz.end()));
    }

};
