/*
Given a stack of integers of size N, your task is to complete the function pairWiseConsecutive(), that checks whether numbers in the stack are pairwise consecutive or not. The pairs can be increasing or decreasing, and if the stack has an odd number of elements, the element at the top is left out of a pair. The function should retain the original stack content.

Only following standard operations are allowed on stack.

push(X): Enter a element X on top of stack.
pop(): Removes top element of the stack.
empty(): To check if stack is empty.
Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains n denoting the number of elements to be inserted into the stack. The second line contains the elements to be inserted into the stack.

Output Format:
For each testcase, in a new line, print "Yes"(without quote) if the elements of the stack is pairwise consecutive, else print "No".

Your Task:
This is a function problem. You only need to complete the function pairWiseConsecutive that takes a stack as an argument and returns true if the stack is found to be pairwise consecutive, else it returns false. The printing is done by the driver code.

Constraints:
1 < =T <= 100
1 < =N <= 103

Example:
Input:
2
6
1 2 3 4 5 6
5
1 5 3 9 7
Output:
Yes
No

Explanation:
Testcase1: The number of elements are even and they are pairwise consecutive so we print Yes.
Testcase2: The number of elements are odd so we remove the top element and check for pairwise consecutive. It is not so we print No.
*/

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s);

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	    /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
	return 0;
}

// } Driver Code Ends


//User function Template for C++

// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    stack<int>a;
    a.push(s.top());
    s.pop();
    while(!s.empty())
    {
        if(a.top()-s.top()!=1)
        {
            return false;
        }
        a.pop();
        a.push(s.top());
        s.pop();
    }
    return true;
}