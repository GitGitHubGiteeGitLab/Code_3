/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    //自定义比较器
    struct Comparator {
        bool operator()(ListNode *a, ListNode *b){
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) { 
        // 创建一个小根堆，并设置元素的排序方式
        priority_queue<ListNode*, vector<ListNode* >, Comparator> queue;
        // 遍历链表数组，然后将每个链表的每个节点都放入堆中
        int i = 0;
        int size = lists.size();
        while(i < size){
            ListNode *list = lists[i];
            while(list != nullptr){
                queue.push(list);
                list = list->next;
            }
            ++i;
        }

        //哨兵卫
        ListNode dummy(-1);
        dummy.next = nullptr;
        ListNode *cur = &dummy;
        while(!queue.empty()){
            cur->next = queue.top();
            queue.pop();
            cur = cur->next;
        }
        //最后一个节点的后继为空
        cur->next = nullptr;
        return dummy.next;
    }

};
