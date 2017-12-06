/*Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example:

Input: "babad"

Output: "bab"

Note: "aba" is also a valid answer.
Example:

Input: "cbbd"

Output: "bb”*/

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() == 1)
        {
            return s;
        }
        if(s.size() == 2)
        {
            if(s[0]==s[1])
            {
                return s;
            }
            else
            {
                string ret;
                ret.push_back(s[0]);
                return ret;
            }
        }
        if(s.size() == 3)
        {
            if(s[0]==s[2])
            {
                return s;
            }
            else if(s[0]==s[1])
            {
                string ret;
                ret.push_back(s[0]);
                ret.push_back(s[0]);
                return ret;    
            }
            else if(s[2]==s[1])
            {
                string ret;
                ret.push_back(s[1]);
                ret.push_back(s[1]);
                return ret;    
            }
            else
            {
                string ret;
                ret.push_back(s[0]);
                return ret;       
            }
        }
            string ret;
            ret.push_back(s[0]);
            for(int i=1;i!=s.size()-1;i++)
            {
                
                int left = i-1;
                int right = i+1;
                if(ret.size() >(s.size()-i-1)*2+1)
                    {
                        break;
                    }
                string temp;
                temp.push_back(s[i]);
                while(left >= 0 && right <= s.size()-1)
                {
                    if(s[left]==s[right])
                    {
                        temp=s[left]+temp+s[right];
                        left--;
                        right++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(temp.size()>ret.size())
                {
                    ret=temp;
                }
            }
            for(int i=1;i!=s.size()-2;i++)
            {
                
                int left = i-1;
                int right = i+2;
                if(ret.size() > (s.size()-i-1)*2+2)
                    {
                        break;
                    }
                string temp;
                if(s[i]==s[i+1])
                {
                    temp.push_back(s[i]);
                    temp.push_back(s[i]);
                }
                else
                {
                    continue;
                }
                while(left >= 0 && right <= s.size()-1)
                {
                    
                    if(s[left]==s[right])
                    {
                        temp=s[left]+temp+s[right];
                        left--;
                        right++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(temp.size()>ret.size())
                {
                    ret=temp;
                }
            }
            return ret;
    }
};