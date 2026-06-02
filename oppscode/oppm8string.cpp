#include <iostream>
#include <string>
using namespace std;
// in cpp string is a special class that is created to make string handling easy .the memoey _WCHAR_T_DECLARED
// the character of the string is safe is a char* buffer which is dynamicaly allocated.
// to obtimise the memory the size of the buffer is expended on the basis of need .
// a cpp string when intialise contains 15 memory locations at the beginnig ,
// if the bigger sting is safe in this buffer the memory is reallocated to a bigger size.
int main()
{
    string s = "apple";
    cout << s.size() << endl;
    string s1;
    cout << s1 << endl;
    string s2(10, 'a');
    cout << s2 << endl;
    // uses in put
    cin >> s;
    cout << s << endl;
    // I full phrase goline (in, s);
    getline(cin, s);
    cout << s << endl;
    s1 = "Hello";
    s2 = "hell";
    cout << (s1 > s2) << endl;
    cout<<s1.compare(s2) << endl;
    cout<<s1.find("a") << endl;
    cout<<s1.find_last_of("lol");
    s1= "mathematics";
    if(s1.find("ma")!=string::npos){
        cout<<"found";
    }else{
        cout<<"not found";
        cout<<string::npos;
    }
}