#include <iostream>
#include <stack>
#include <string>

bool areParenthesesBalanced(const std::string& expression) {
    std::stack<char> stack;

    // Traverse the expression
    for (char ch : expression) {
        // If the character is an opening bracket, push it onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        }
        // If the character is a closing bracket
        else if (ch == ')' || ch == '}' || ch == ']') {
            // If the stack is empty, there's no matching opening bracket
            if (stack.empty()) {
                return false;
            }

            // Check if the top of the stack matches the corresponding opening bracket
            char top = stack.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                stack.pop(); // Pop the matching opening bracket
            } else {
                return false; // Mismatched pair
            }
        }
        // Ignore all other characters (you can modify this to handle other cases)
    }

    // If the stack is empty, all brackets were matched
    return stack.empty();
}

int main() {
    std::string expression;

    // Prompt the user for an expression
    std::cout << "Enter an expression to check for balanced parentheses: ";
    std::getline(std::cin, expression);

    // Check if the parentheses are balanced
    if (areParenthesesBalanced(expression)) {
        std::cout << "The parentheses in the expression are balanced." << std::endl;
    } else {
        std::cout << "The parentheses in the expression are NOT balanced." << std::endl;
    }

    return 0;
}
