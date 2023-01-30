#include <iostream>
#include <string>

using namespace std;
int main()
{
    int var1(-6);
    cout << "Hello world" << " and drink good drinks" << endl;
    cout << var1 << endl;
    cin >>  var1;
    cout << "gnark" << var1 << endl;
    cin.ignore();
    string thephrase("j");
    cout << "mets un truc tocard" << endl;
    getline(cin, thephrase);
    cout << "avec ca, qa marche"<<endl;
    if (var1 == 8)
    {
        cout << "voila c'est tout" << endl;
    }
    else
    {
        cout << "bah c'est rate pelo" << endl;
    }
    return 0;
}