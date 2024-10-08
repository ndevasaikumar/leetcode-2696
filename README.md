**2696. Minimum String Length After Removing Substrings**

First create a stack let's say stk.

Now traverse through the string from starting index(0). 

Check if the  current char is 'B' and stk.top() == 'A' if this condition satisfies pop() the top element of stack.

If the above condition fails now check if the  current char is 'D' and stk.top() == 'C' if this condition satisfies pop() the top element of stack.

IF the both the condtions are false that indicates either your stack is **empty** (or) **stk.top() != 'A' and stk.top() != 'C'**. So push the current char to the stk.

By the end of the loop we get the stk after removing substrings**("AB" & "CD")** .So **return stk.size()** which is the required soluiton.

**Time Complexity :**

O(N)

**Space Comlexity :**

O(N)
