class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> numCourseVec;
        vector<int> ret;
        for(int i=0;i!=numCourses;i++)
        {
            numCourseVec.push_back(0);
        }
        for(auto prerequistite:prerequisites)
        {
            numCourseVec[prerequistite.first]= numCourseVec[prerequistite.first]+1;
        }
        bool isend=false;
        while(isend ==false)
        {
            vector<int> temp;
            temp.clear();
            isend=true;
            for(int i =0;i!=numCourseVec.size();i++)
            {
                if(numCourseVec[i] == 0)
                {
                    isend=false;
                    ret.push_back(i);
                    temp.push_back(i);
                }
            }
            for(auto prerequistite:prerequisites)
            {
                for(auto tem:temp)
                {
                    if(prerequistite.second == tem)
                    {
                        numCourseVec[prerequistite.first]=numCourseVec[prerequistite.first]-1;
                    }
                }
            }
            for(auto tem:temp)
            {
                numCourseVec[tem] = -1;   
            }
        }
        if(ret.size()!=numCourses)
        {
            vector<int>  tempret;
            return tempret;
        }
        else
            return ret;
    }
};