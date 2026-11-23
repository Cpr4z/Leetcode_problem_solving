#include "restore_ip_address.hpp"

void bruteforce(const string& s, int num, int start, vector<string>& current_ip, vector<string>& result) {
    if (num > 4) {
        if (s.size() == start) {
            string result_ip = current_ip[0];
            for (int i = 1; i < 4; ++i) {
                result_ip += '.' + current_ip[i];
            }
            result.push_back(result_ip);
        }
        return;
    }

    int remaining = s.size() - start;
    if (remaining < 5 - num) {
        return;
    }

    int max_len = num == 4 ? remaining : min(remaining, 3);
    for (int i = 1; i <= max_len; ++i) {
        std::string current = s.substr(start, i);

        if ((i > 1 &&  current[0] == '0') || std::stoi(current) > 255) {
            break;
        }

        current_ip.push_back(current);
        bruteforce(s, num + 1, start + i, current_ip, result);
        current_ip.pop_back();
    }
}

vector<string> restoreIp(string s) {
    vector<string> result;
    vector<string> current_ip;
    bruteforce(s, 1, 0, current_ip, result);
    return result;
}
