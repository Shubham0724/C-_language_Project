//Inserting elements in a vector
/*
#include <iostream>
#include <vector>
using namespace std;
 
void display(vector<int> v)
{
    cout << "The elements are: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
 
int main()
{
    vector<int> v = {1, 2, 3, 4};
    display(v);
    v.push_back(5); //5 is inserted at the back
    display(v);
}
*/

//Removing elements from a vector

#include <iostream>
#include <vector>
using namespace std;
 
void display(vector<int> v)
{
    cout << "The elements are: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
 
int main()
{
    vector<int> v = {1, 2, 3, 4};
    display(v);
    v.pop_back(); //4 gets popped from the back
    display(v);
}