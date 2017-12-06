/*Given a digit string, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below.



Input:Digit string "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
Note:
Although the above answer is in lexicographical order, your answer could be in any order you want.*/

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> two = {"a","b","c"};
        vector<string> three = {"d","e","f"};
        vector<string> four = {"g","h","i"};
        vector<string> five = {"j","k","l"};
        vector<string> six={"m","n","o"};
        vector<string> seven = {"p","q","r","s"};
        vector<string> eight= {"t","u","v"};
        vector<string> nine = {"w","x","y","z"};
        vector<string> ret;
        if(digits.size() == 0)
        {
            return ret;
        }
        for(auto digit:digits)
        {
            vector<string> temp;
            switch(digit)
            {
                case '2':
                    for(auto i:two)
                    {
                        if(ret.empty())
                        {
                            temp.push_back(i);
                        }
                        else
                        {
                        for(auto j:ret)
                        {
                            temp.push_back(j+i);
                        }
                        }
                    }
                    break;
                    case '3':
                    for(auto i:three)
                    {
                        if(ret.empty())
                        {
                            temp.push_back(i);
                        }
                        else
                        {
                        for(auto j:ret)
                        {
                            temp.push_back(j+i);
                        }
                        }
                    }
                    break;
                    case '4':
                    for(auto i:four)
                    {
                        if(ret.empty())
                        {
                            temp.push_back(i);
                        }
                        else
                        {
                        for(auto j:ret)
                        {
                            temp.push_back(j+i);
                        }
                        }
                    }
                    break;
                    case '5':
                    for(auto i:five)
                    {
                        if(ret.empty())
                        {
                            temp.push_back(i);
                        }
                        else
                        {
                        for(auto j:ret)
                        {
                            temp.push_back(j+i);
                        }
                        }
                    }
                    break;
                    case '6':
                    for(auto i:six)
                    {
                        if(ret.empty())
                        {
                            temp.push_back(i);
                        }
                        else
                        {
                        for(auto j:ret)
                        {
                            temp.push_back(j+i);
                        }
                        }
                    }
                    break;
                    case '7':
                    for(auto i:seven)
                    {
                        if(ret.empty())
                        {
                            temp.push_back(i);
                        }
                        else
                        {
                        for(auto j:ret)
                        {
                            temp.push_back(j+i);
                        }
                        }
                    }
                    break;
                    case '8':
                    for(auto i:eight)
                    {
                        if(ret.empty())
                        {
                            temp.push_back(i);
                        }
                        else
                        {
                        for(auto j:ret)
                        {
                            temp.push_back(j+i);
                        }
                        }
                    }
                    break;
                    case '9':
                    for(auto i:nine)
                    {
                        if(ret.empty())
                        {
                            temp.push_back(i);
                        }
                        else
                        {
                        for(auto j:ret)
                        {
                            temp.push_back(j+i);
                        }
                        }
                    }
                    break;
                default:
                    break;
                    
            }
            ret.clear();
            for(auto i : temp)
            {
                ret.push_back(i);
            }
        }
        return ret;
    }
};