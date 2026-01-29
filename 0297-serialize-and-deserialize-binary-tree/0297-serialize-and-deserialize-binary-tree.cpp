/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root) return "N,";

        return to_string(root->val) + "," + serialize(root->left) + serialize(root->right);
    }

    TreeNode* deserialize_helper(queue<string> &q) {
        string s = q.front();
        q.pop();

        if (s == "N") return NULL;

        TreeNode* root = new TreeNode(stoi(s));
        root->left = deserialize_helper(q);
        root->right = deserialize_helper(q);

        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string s;
        int size = data.size();

        for (int i = 0; i < size; i++) {
            if (data[i] == ',') {
                q.push(s);
                s = "";
                continue;
            }

            s += data[i];
        }

        if (s.size() != 0) q.push(s);
        return deserialize_helper(q);
    }
};
// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));