Bracket Validator
This project provides a C++ implementation of a bracket validator function that checks whether a given string containing only brackets is valid.

✅ Problem Statement
Given a string s containing just the characters:

'(', ')'

'{', '}'

'[', ']'

Determine if the input string is valid.

A string is valid if:
Open brackets are closed by the same type of brackets.

Open brackets are closed in the correct order.

Every closing bracket has a corresponding open bracket of the same type.

📘 Example
Input	Output
"()"	true
"()[]{}"	true
"(]"	false
"([)]"	false
"{[]}"	true

💡 Approach
The solution uses a stack data structure to:

Push every opening bracket onto the stack.

When a closing bracket is encountered, check if it matches the top of the stack.

If it does, pop the stack.

If not, or if the stack is empty when a closing bracket is encountered, return false.

After processing the entire string, the stack should be empty for the input to be valid.
🧪 How to Run
Copy the above code into a .cpp file (e.g., BracketValidator.cpp).

Compile it using a C++ compiler:

bash
Copy
Edit
g++ -std=c++11 BracketValidator.cpp -o validator
Run it with your own test cases by calling the isValid function from a main() function.

📄 License
This project is licensed under the MIT License.
