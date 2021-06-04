class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node)return NULL;
        unordered_map<Node*, Node*> hg;
        queue<Node*> q;
        q.push(node);
        Node* start = new Node(node->val, {});
        hg[node] = start;
        while (!q.empty()) {
            auto num = q.front();
            q.pop();
            for (int i = 0; i < num->neighbors.size(); i++) {
                if (hg.find(num->neighbors[i]) == hg.end()) {
                    Node* n = new Node(num->neighbors[i]->val, {});
                    hg[num->neighbors[i]] = n;
                    q.push(num->neighbors[i]);
                }
                hg[num]->neighbors.push_back(hg[num->neighbors[i]]);
            }
        }
        return start;
    }
};