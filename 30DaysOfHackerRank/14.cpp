#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector <int> e)
    {
        elements = e;
    }
    void computeDifference()
    {
        int maxVal = elements[0];
        int minVal = elements[0];
        for(int i=1; i<elements.size(); i++)
        {
            if(minVal > elements[i])
                minVal = elements[i];
            if(maxVal < elements[i])
                maxVal = elements[i];
        }
        maximumDifference = maxVal - minVal;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}