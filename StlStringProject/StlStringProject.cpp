#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Hello world";
    
    string str2(10, '*');
    cout << str2 << "\n";

    string str3(str1, 6);
    cout << str3 << "\n";

    string str4("Hello people", 5);
    cout << str4 << "\n";

    auto it = str4.begin();
    cout << *it << "\n";
    it += 4;
    cout << *it << "\n";

    str1.insert(6, str4, 2, 3);
    cout << str1 << "\n";

    string s1 = "**-- Hello --**";
    string s2 = "*";

    cout << boolalpha << s1.starts_with(s2) << "\n";

    string s3 = "My book not book is red";
    //s3.replace(3, 4, "table");
    //cout << s3 << "\n";

    string s4 = "3 + 5 - 7 * 9";
    string opers = "+-*/";
    int pos{};
    while (1)
    {
        pos = s4.find_first_of(opers, pos);
        if (pos == string::npos)
            break;
        cout << pos++ << "\n";
    }

    string s5 = "abcdefabkkalpma";
    string stemp = "ab";
    auto p = string::npos;
    while (1)
    {
        p = s5.find(stemp);
        if (p == string::npos) break;
        s5.replace(p, stemp.length(), "");
    }
    //erase(s5, 'a');
    cout << s5 << "\n";

    string s6 = "0123456789";
    erase_if(s6, [](auto item) { return (item - '0') % 2 == 0; });
    cout << s6 << "\n";

    string s7 = "-23423";
    string s8 = "-1242.2342";
    string s9 = "12345.67e-2";

    int n = 34534;
    bool f = true;

    string s10;

    s10 = "Result = " + to_string(f);
    cout << s10 << "\n";
}
