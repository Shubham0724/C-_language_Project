//Inserting elements in a map

#include <iostream>
#include <map>
using namespace std;
 
void display(map<string, int> m)
{
    cout << "The elements are: " << endl;
    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;
}
 
int main()
{
    map<string, int> m = {{"Central", 2}, {"Cee", 4}};
    display(m);
    m["Coder"] = 3;
    display(m);
}