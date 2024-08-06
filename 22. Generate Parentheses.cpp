#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        solver(n, "", 0, 0);
        return ans;
    }

private:
    vector<string> ans;
    void solver(int n, string curstr, int l, int r) {
        if (l == n && r == n) {
            ans.push_back(curstr);
            return;
        }

        if (l < n) {
            solver(n, curstr + "(", l + 1, r);
        }
        if (l > r && r < n) {
            solver(n, curstr + ")", l, r + 1);
        }
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Solution solution;
    vector<string> sol = solution.generateParenthesis(num);
    for (auto& i : sol) {
        cout << i << endl;
    }
    return 0;
}
