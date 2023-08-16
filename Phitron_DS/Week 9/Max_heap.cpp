#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;

    MaxHeap()
    {
    }
    // O(logn)
    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    // O(logn)
    void down_heapify(int idx)
    {
        while (1)
        {
            int largest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;
            if (l < nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if (r < nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if (largest == idx)
            {
                break;
            }
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

    // O(logn)
    void Delete(int idx)
    {
        if (idx >= nodes.size())
        {
            return;
        }
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    // O(logn)
    void Insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    // O(n)
    void PrintHeap()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << endl;
    }

    // O(1)
    int getMax()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        return nodes[0];
    }

    // O(logn)
    int ExtractMax()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }

    // O(n)
    void Build_from_array(vector<int> &a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = n / 2 - 1;
        for (int i = last_non_leaf; i >= 0; i--)
        {
            down_heapify(i);
        }
    }

    // O(nlogn)
    vector<int> heap_sort(vector<int> &a)
    {
        MaxHeap h;
        h.Build_from_array(a);
        vector<int> ans;
        for (int i = 0; i < a.size(); i++)
        {
            ans.push_back(h.ExtractMax());
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    MaxHeap heap;
    // heap.Insert(4);
    // heap.Insert(7);
    // heap.Insert(9);
    // heap.Insert(1);
    // heap.Insert(10);
    // heap.Insert(20);
    // heap.Insert(30);

    // cout << "Max element = " << heap.getMax() << endl;
    // // heap.PrintHeap();
    // cout << "Max element = " << heap.ExtractMax() << endl;
    // cout << "Max element = " << heap.ExtractMax() << endl;

    // // heap.Delete(0);

    vector<int> a = {1, 2, 3, 4, 10, 9, 5, 7};
    vector<int> sorted_a = heap.heap_sort(a);
    for (int i = 0; i < sorted_a.size(); i++)
    {
        cout << sorted_a[i] << " ";
    }
    cout << endl;

    heap.PrintHeap();

    return 0;
}