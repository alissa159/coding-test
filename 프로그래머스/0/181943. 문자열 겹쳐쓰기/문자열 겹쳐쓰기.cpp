#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    string front = my_string.substr(0, s);
    string back = my_string.substr(s+ overwrite_string.size());
    answer= front + overwrite_string + back;
    return answer;
}
