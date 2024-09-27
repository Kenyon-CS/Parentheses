# Parentheses
C++ program that uses a stack to check if an expression entered by the user has balanced parentheses, including all three types: (), {}, and [].

1. Headers Included
  - `iostream`: For input/output operations.
  - `stack`: To use the `std::stack` container.
  - `string`: To use `std::string` for handling the expression.
2. Function `areParenthesesBalanced`
  - Purpose: Checks if the parentheses in the given expression are balanced.
  - Parameters: `const std::string& expression` - the input expression to check.
  - Returns: `bool` - `true` if balanced, `false` otherwise.
## Algorithm Steps:
1. Initialize a Stack:
  - Create an empty `std::stack<char>` to keep track of opening brackets.
2. Traverse the Expression:
  - For each character `ch` in the expression:
    - If `ch` is an opening bracket `((, {, [)` :
      - Push `ch` onto the stack.
    - If `ch` is a closing bracket `(), }, ])`:
      - If the `stack` is empty:
        - Return `false` (there's no matching opening bracket).
      - Else:
        - Check for a matching opening bracket:
          - `Pop` the top element from the stack if it matches the corresponding opening bracket.
          - If it doesn't match, return `false` (mismatched brackets).
    - Ignore other characters:
      - The function only cares about brackets.
3. Final Check:
  - After traversing the entire expression:
    - If the `stack` is empty:
      - Return `true` (all brackets were matched).
    - Else:
      - Return `false` (there are unmatched opening brackets).
3. main Function
  - Input:
     - Prompts the user to enter an expression.
     - Uses `std::getline` to read the entire line, allowing for spaces and various characters.
  - Processing:
    - Calls `areParenthesesBalanced(expression)` to check if the expression has balanced parentheses.
  - Output:
    - Displays whether the parentheses are balanced or not.
