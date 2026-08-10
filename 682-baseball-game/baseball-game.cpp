class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int> ans;

        for (auto &it : operations) {

            if (it == "C") {
                ans.pop_back();
            }

            else if (it == "D") {
                int x = ans.back();
                ans.push_back(x * 2);
            }

            else if (it == "+") {
                int x = ans[ans.size() - 1];
                int y = ans[ans.size() - 2];

                ans.push_back(x + y);
            }

            else {
                ans.push_back(stoi(it));
            }
        }

        int x = 0;

        for (auto it : ans) {
            x += it;
        }

        return x;
    }
};