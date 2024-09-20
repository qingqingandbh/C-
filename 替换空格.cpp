//请实现一个函数，把字符串中的每个空格替换成"%20"。
class Solution {
public:
    string replaceSpaces(string& str) {
        int start = 0;
        int end = str.length();      //计算原始字符串的长度
        string result;      //构建新的字符串
        for (int i = 0; i < end; i++)
        {
            if (str[i] == ' ')
            {
                result += "%20";
            }
            else
            {
                result += str[i];
            }
        }
        return result;
    }
};
