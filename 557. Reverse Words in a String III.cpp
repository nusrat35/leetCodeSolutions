#include <bits/stdc++.h>
using namespace std;

string reverseWords(string& s) {
        int i = 0;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] == ' ') {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
        }
        reverse(s.begin() + i, s.end());
        return s;
}
/*string reverseWords(string s)
{
    int m = 0;
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
        if(i+1 == len){
                for(int j = m, k =  i; j < m + floor((i-m+1)/2); j++,k--)
                    swap(s[j],s[k]);
                break;
        }
        if(s[i]==' ' or i+1 == len)
        {
            for(int j = m, k = (len == i+1 ? i : i-1); j<= (m + ((i-m)/2)); j++,k--)
                swap(s[j],s[k]);
            m = i+1;
        }

    }
    return s;

}*/
int main()
{
    string s = "God Ding";
    cout<<reverseWords(s);
}
