//��ʵ��һ�����������ַ����е�ÿ���ո��滻��"%20"��
class Solution {
public:
    string replaceSpaces(string& str) {
        int start = 0;
        int end = str.length();      //����ԭʼ�ַ����ĳ���
        string result;      //�����µ��ַ���
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
