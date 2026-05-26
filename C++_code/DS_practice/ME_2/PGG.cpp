#include <iostream>
#include <vector>
#include <limits>
#include <sstream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int _val): val(_val), left(nullptr), right(nullptr) {}

    bool equals(const TreeNode* other) {
        if(val != other->val) {
            return false;
        }

        if(left && other->left) {
            if(!left->equals(other->left)) {
                return false;
            }
        } else if(left || other->left) {
            return false;
        }

        if(right && other->right) {
            if(!right->equals(other->right)) {
                return false;
            }
        } else if(right || other->right) {
            return false;
        }

        return true;
    }

    bool is_sub_tree(TreeNode* target) {
        if(equals(target)) {
            return true;
        }

        if(left) {
            if(left->is_sub_tree(target)) {
                return true;
            }
        }

        if(right) {
            if(right->is_sub_tree(target)) {
                return true;
            }
        }

        return false;
    }
};

void solve() {
    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss(line);
    std::vector<TreeNode> v;
    v.reserve(20000);
    int x;
    while(ss >> x) {
        v.push_back(TreeNode(x));
    }

    TreeNode* root = &v[0];
    int size = v.size();
    for(int i = 0; i < size; ++i) {
        if(!v[i].val) {
            continue;
        }

        int l = 2 * i + 1;
        if(l < size) {
            if(v[l].val) {
                v[i].left = &v[l];
            }
        }

        int r = 2 * i + 2;
        if(r < size) {
            if(v[r].val) {
                v[i].right = &v[r];
            }
        }
    }

    std::vector<TreeNode> vv;
    vv.reserve(20000);
    std::getline(std::cin, line);
    std::stringstream sss(line);
    while(sss >> x) {
        vv.push_back(TreeNode(x));
    }

    TreeNode* target = &vv[0];
    size = vv.size();
    for(int i = 0; i < size; ++i) {
        if(!vv[i].val) {
            continue;
        }

        int l = 2 * i + 1;
        if(l < size) {
            if(vv[l].val) {
                vv[i].left = &vv[l];
            }
        }

        int r = 2 * i + 2;
        if(r < size) {
            if(vv[r].val) {
                vv[i].right = &vv[r];
            }
        }
    }

    if(root->is_sub_tree(target)) {
        std::cout << "T\n";
    } else {
        std::cout << "F\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while(T--) {
        solve();
    }

    return 0;
}