//
// Jose Garcia
// 04/20/25
// Pig Latin Programming Project
// COSC 1030
//

#include <iostream>
#include <cctype>

using namespace std;

void convert_piglatin(char[]);

int main()
{
    const int SIZE = 100;
    char sentence[SIZE];

    cout << "Enter a sentence you want converted to pig latin: ";
    cin.getline(sentence, SIZE);

    convert_piglatin(sentence);

    return 0;
}

void convert_piglatin(char str[])
{
    int i = 0;
    cout << "\n";

    while (str[i] != '\0')
    {
        //skip spaces
        while (isspace(str[i]) && str[i] != '\0')
        {
            cout << str[i];
            i++;
        }
        
        // start of word
        int start = i;

        // move through word
        while (!isspace(str[i]) && str[i] != '\0')
        {
            i++;
        }
        
        int end = i;

        // words with one letter
        if (end -start == 1)
        {
            cout << str[start] << "AY";
        }
        else
        {
            // display word in pig latin
            for (int j = start + 1; j < end; j++)
            {
                cout << str[j];
            }
            cout << str [start] << "AY";
        }
    }


cout << endl;

}