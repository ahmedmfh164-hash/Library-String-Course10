# Library-String

## 📚 String Library

A simple and powerful C++ library for string manipulation and utility functions.

---

🚀 Features

This library provides a wide range of string operations, including:

- 🔤 Case conversion (Upper / Lower / Invert)
- 🧠 Word processing (Count, Split, Reverse)
- ✂️ Trim functions (Left, Right, Full)
- 🔍 Character analysis (Vowels, Capital, Small letters)
- 🔁 Replace words
- 🧹 Remove punctuation
- 🔗 Join strings (Vector & Array)

---

🛠️ Installation

1. Download or clone the repository:

git clone https://github.com/your-username/clsString.git

2. Include the header file in your project:

#include "clsString.h"

---

📌 Usage Example

#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
    clsString text("hello world");

    text.UpperFirstOfEachWord();

    cout << text.Value << endl; // Output: Hello World

    return 0;
}

---

📖 Available Functions

🔹 Basic Operations

- "Length()"
- "CountWords()"

🔹 Case Manipulation

- "UpperFirstOfEachWord()"
- "LowerFirstLetterOfEachWord()"
- "UpperAllString()"
- "LowerAllString()"
- "InvertAllLettersCase()"

🔹 Character Analysis

- "CountCapitalLetters()"
- "CountSmallLetters()"
- "CountVowels()"
- "CountSpecificLetter()"
- "IsVowel()"

🔹 String Processing

- "Split()"
- "JoinString()"
- "ReverseWordsInString()"
- "ReplaceWord()"

🔹 Cleaning Functions

- "TrimLeft()"
- "TrimRight()"
- "Trim()"
- "RemovePunctuation()"

---

⚠️ Notes

- This library uses "__declspec(property)" which is supported in Visual C++ only.
- Functions assume simple space "" "" as delimiter in most cases.
- Not optimized yet for very large strings.

---

💡 Future Improvements

- Support multiple delimiters (tabs, new lines)
- Improve performance using references
- Add Unicode support
- Make it cross-platform (remove "__declspec" dependency)

---

👨‍💻 Author

Developed by Ahmed Muhammad
