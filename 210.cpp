/*There are a total of n courses you have to take, labeled from 0 to n - 1.

Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, return the ordering of courses you should take to finish all courses.

There may be multiple correct orders, you just need to return one of them. If it is impossible to finish all courses, return an empty array.

For example:

2, [[1,0]]
There are a total of 2 courses to take. To take course 1 you should have finished course 0. So the correct course order is [0,1]

4, [[1,0],[2,0],[3,1],[3,2]]
There are a total of 4 courses to take. To take course 3 you should have finished both courses 1 and 2. Both courses 1 and 2 should be taken after you finished course 0. So one correct course order is [0,1,2,3]. Another correct ordering is[0,2,1,3].

Note:
The input prerequisites is a graph represented by a list of edges, not adjacency matrices. Read more about how a graph is represented.
You may assume that there are no duplicate edges in the input prerequisites.
*/


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
