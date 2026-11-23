#include "validArrangement.hpp"

#include <stack>
#include <unordered_map>

bool hasEulerianPath(std::unordered_map<int, std::vector<int>>& adjList, int& start, int& end)
{
    std::unordered_map<int, int> inDegree, outDegree;
    for (const auto&[u, neighbours] : adjList)
    {
        for (int v : neighbours)
        {
            outDegree[u]++;
            inDegree[v]++;
        }
    }

    int startVertice = 0;
    int endVertice = 0;

    for (const auto[node, outDeg] : outDegree)
    {
        int inDeg = inDegree[node];
        if (outDeg - inDeg == 1)
        {
            start = node;
            ++startVertice;
        }
        else if (inDeg - outDeg == 1)
        {
            end = node;
            ++endVertice;
        }
        else if (inDeg != outDeg)
        {
            return false;
        }
    }

    for (const auto& [node, inDeg] : inDegree) {
        if (outDegree.find(node) == outDegree.end() && inDeg == 1) {
            end = node;
            ++endVertice;
        }
    }

    bool cycle = startVertice == 0 && endVertice == 0;

    if (cycle)
    {
        for (int i = 0; i < outDegree.size(); ++i)
        {
            if (outDegree[i] > 0)
            {
                start = i;
                end = i;
                break;
            }
        }
    }

    return (startVertice == 1 && endVertice == 1) || cycle;
}

std::vector<std::vector<int>> Solution::validArrangement(std::vector<std::vector<int>>& pairs)
{
    int max = std::numeric_limits<int>::min();
    //find max in matrix to make incMatrix
    // O(n * m) - complexity
    //where n - rows count; m - columns count
    for (const auto& row : pairs)
    {
        for (const auto& number : row)
        {
            max = std::max(max, number);
        }
    }

    std::unordered_map<int, std::vector<int>> adjList;

    for (const auto& row : pairs)
    {
        int vertex1 = row[0];
        int vertex2 = row[1];
        // we suppose, that we have no loops in graph
        adjList[vertex1].push_back(vertex2);
    }

    int start = 0;
    int end = 0;
    if (hasEulerianPath(adjList, start, end))
    {
        std::vector<int> path;
        std::stack<int> stack;

        stack.push(start);
        while (!stack.empty())
        {
            int node = stack.top();
            if (!adjList[node].empty())
            {
                int nextNode = adjList[node].back();
                adjList[node].pop_back();
                stack.push(nextNode);
            }
            else
            {
                path.push_back(node);
                stack.pop();
            }

        }

        std::vector<std::vector<int>> adjPath;
        std::reverse(path.begin(), path.end());
        for (int i = 0; i < path.size() - 1; ++i)
        {
            adjPath.push_back({path[i], path[i+1]});
        }

        return adjPath;
    }

    return {};
}