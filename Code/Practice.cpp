#include <iostream>
#include <string>
using namespace std;

// create a function that accepts 2 integers and returns their sum


template <typename T> T add(T a, T b)
{
    return a + b;
}

/*void enterInt()
{
    int a;
    int b;
    cout << "Enter an integer\n";
    cin >> a;
    cout << "Enter an integer\n";
    cin >> b;
    cout << add(a, b) << endl;
}
void enterFloat()
{
    float c;
    float d;
    cout << "Enter a float\n";
    cin >> c;
    cout << "Enter a float\n";
    cin >> d;
    cout << add(c, d) << endl;
}*/
void spacer(string word)
{
    int length = word.length();
    for (int i = 0; i < length; i++)
    {
        cout << word[i] << " ";
    }
}
int main()
{
    string word;
    cout << "enter a word \n";
    getline(cin, word);
    //cin >> word;
    spacer(word);
    //cout << word << endl;

}

