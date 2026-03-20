
#include <iostream>
#include"clsString.h";

using namespace std;


int main()
{
    
    clsString String1;


    clsString String2("Ahmed");

    String1.Value = "Ali Mohamed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "Number of words: " << String1.CountWords() << endl;

    cout << "Number of words(Hany Ahmed Mahmoud Tamer): " << String1.CountWords("Hany Ahmed Mahmoud Tamer") << endl;

    cout << "Number of words(Ahmed Mohamed): " << clsString::CountWords("Ahmed Mohamed") << endl;

    //------------------------
    clsString String3("hi how are you?");

    cout << "String3 = "<<String3.Value << endl;

    cout << "String Length = " << String3.Length() << endl;

    String3.UpperFirstOfEachWord();
    cout << String3.Value << endl;

    //------------------------

    String3.LowerFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //------------------------

    String3.UpperAllString();
    cout << String3.Value<<endl;

    //-----------------------

    String3.LowerAllString();
    cout << String3.Value << endl;

    //------------------------

    cout << "After inverting a : " << clsString::InvertLetterCase('a') << endl;

    //-------------------------

    String3.Value = "AbCdEfg";

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

   //----------------------------

    cout << "Capital Letters count : " << clsString::CountLetters("Ahmed Mohamed", clsString::CapitalLetter) << endl<<endl;

    //---------------------------

    String3.Value = "Welcome to Eygpt";
    cout << String3.Value << endl;

    cout << "Capital Letters count : " << String3.CountCapitalLetters() << endl;

    //--------------------------

    cout << "Small Letters count : " << String3.CountSmallLetters() << endl;

    //-------------------------

    cout << "Vowels count : " << String3.CountVowels() << endl;

    //---------------------------

    cout << "Letter E count : " << String3.CountSpecificLetter('E',false) << endl;

    //--------------------------

    cout << "Is Letter a Vowel? " << clsString::IsVowel('a') << endl;

    //-------------------------

    cout << "Words Count  : " << String3.CountWords() << endl;

    //------------------------

    vector<string>vString;

    vString = String3.Split(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }

    //-----------------------

    //Trims
    String3.Value = "   Ahmed Mouhamed   ";
    cout << "\nString   =" << String3.Value;

    String3.Value = "   Ahmed Mohamed   ";
    String3.TrimLeft();
    cout << "\n\nTrim Left = " << String3.Value;

    //-------------------------

    String3.Value = "   Ahmed Mohamed   ";
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.Value;

    //------------------------

    String3.Value = "   Ahmed Mohamed   ";
    String3.Trim();
    cout << "\nTrim    = " << String3.Value;

    //------------------------

    //Joins
    vector<string>vString1 = { "Ahmed","Farid","Ali","Maher" };

    cout << "\n\nJoin String From Vector: \n";
    cout << clsString::JoinString(vString1, " ");

    string arrString[] = { "Ahmed","Farid","Ali","Maher" };


    cout << "\n\nJoin String From array: \n";
    cout << clsString::JoinString(arrString,4, " ");

    //-----------------------

    String3.Value = "Ahmed Mohamed";
    cout << "\n\nString    =" << String3.Value<<endl;

    String3.ReverseWordInString();
    cout << "\nReverse Words : " << String3.Value<<endl;

    //-----------------------

    String3.Value = "Ahmed Mohamed Faheem";
    cout << "\nReplace : " << String3.ReplaceWord("Ahmed", "Sari") << endl;

    //----------------------

    String3.Value = "This is: a sample text, with punctuation.";
    cout << "\n\nString    =" << String3.Value;

    String3.RemovePunctuation();
    cout << "\nRemove Punctuations : "<< String3.Value<< endl;



    system("pause>0");
    return 0;


}
