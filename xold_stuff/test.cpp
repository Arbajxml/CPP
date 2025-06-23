#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    string s3;

    cout << "1. Original strings:\n";
    cout << "s1: " << s1 << ", s2: " << s2 << ", s3: " << s3 << "\n\n";

    // size() / length()
    cout << "2. Length of s1: " << s1.length() << "\n";

    // empty()
    cout << "3. Is s3 empty? " << (s3.empty() ? "Yes" : "No") << "\n";

    // clear()
    s3 = "Clear me!";
    s3.clear();
    cout << "4. s3 after clear: '" << s3 << "' (length: " << s3.length() << ")\n";

    // at(index) and []
    cout << "5. s1.at(1): " << s1.at(1) << ", s1[1]: " << s1[1] << "\n";

    // append()
    s1.append(" Everyone");
    cout << "6. After append: " << s1 << "\n";

    // + operator
    string s4 = s1 + " " + s2;
    cout << "7. Concatenated with '+': " << s4 << "\n";

    // insert()
    s1.insert(5, ",");
    cout << "8. After insert: " << s1 << "\n";

    // erase()
    s1.erase(5, 1);  // remove the comma
    cout << "9. After erase: " << s1 << "\n";

    // replace()
    s1.replace(6, 8, "there");
    cout << "10. After replace: " << s1 << "\n";

    // substr()
    string sub = s1.substr(0, 5);
    cout << "11. Substring of s1 (0,5): " << sub << "\n";

    // find()
    size_t found = s1.find("there");
    cout << "12. Found 'there' at index: " << found << "\n";

    // rfind()
    string s5 = "one two three two one";
    size_t rfound = s5.rfind("two");
    cout << "13. Last 'two' in s5: " << rfound << "\n";

    // compare()
    int cmp = s1.compare("Hello there");
    cout << "14. Comparing s1 and 'Hello there': " << cmp << " (0 means equal)\n";

    // c_str()
    const char* cstyle = s1.c_str();
    cout << "15. C-style string: " << cstyle << "\n";

    // push_back()
    s1.push_back('!');
    cout << "16. After push_back: " << s1 << "\n";

    // pop_back()
    s1.pop_back();
    cout << "17. After pop_back: " << s1 << "\n";

    // swap()
    cout << "18. Before swap:\ns1: " << s1 << "\ns2: " << s2 << "\n";
    s1.swap(s2);
    cout << "After swap:\ns1: " << s1 << "\ns2: " << s2 << "\n";

    // begin() and end()
    cout << "19. Characters in s1 using iterators: ";
    for (auto it = s1.begin(); it != s1.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}
