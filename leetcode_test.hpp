#pragma once

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <exception>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <optional>
#include <queue>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

// LeetCode starter templates use unqualified names like string/vector.
// Keep this header compatible with those templates when LOCAL_TEST is enabled.
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

namespace leetcode {

// Surface assertion failures and thrown exceptions as readable console output
// instead of silent abnormal termination.
[[noreturn]] inline void terminateWithDiagnostics() {
    exception_ptr current = current_exception();
    if (current != nullptr) {
        try {
            rethrow_exception(current);
        } catch (const exception &error) {
            cerr << error.what() << '\n';
        } catch (...) {
            cerr << "Unhandled non-standard exception\n";
        }
    } else {
        cerr << "Program terminated without an active exception\n";
    }

    abort();
}

struct TerminateHandlerInstaller {
    TerminateHandlerInstaller() {
        set_terminate(terminateWithDiagnostics);
    }
};

inline const TerminateHandlerInstaller terminateHandlerInstaller{};

inline string escapeString(const string &value) {
    string result;
    for (char ch : value) {
        switch (ch) {
        case '\\':
            result += "\\\\";
            break;
        case '"':
            result += "\\\"";
            break;
        case '\n':
            result += "\\n";
            break;
        case '\t':
            result += "\\t";
            break;
        case '\r':
            result += "\\r";
            break;
        default:
            result.push_back(ch);
            break;
        }
    }
    return result;
}

inline string escapeChar(char value) {
    switch (value) {
    case '\\':
        return "\\\\";
    case '\'':
        return "\\'";
    case '\n':
        return "\\n";
    case '\t':
        return "\\t";
    case '\r':
        return "\\r";
    default:
        return string(1, value);
    }
}

inline string toDebugString(const string &value) {
    return "\"" + escapeString(value) + "\"";
}

inline string toDebugString(const char *value) {
    return value == nullptr ? "null" : toDebugString(string(value));
}

inline string toDebugString(char value) {
    return "'" + escapeChar(value) + "'";
}

inline string toDebugString(bool value) {
    return value ? "true" : "false";
}

inline string toDebugString(int value) {
    return to_string(value);
}

inline string toDebugString(long value) {
    return to_string(value);
}

inline string toDebugString(long long value) {
    return to_string(value);
}

inline string toDebugString(double value) {
    ostringstream out;
    out << fixed << setprecision(5) << value;
    return out.str();
}

inline string toDebugString(const optional<int> &value) {
    return value.has_value() ? to_string(*value) : "null";
}

template <typename T>
string toDebugString(const vector<T> &values) {
    string result = "[";
    for (size_t index = 0; index < values.size(); ++index) {
        if (index > 0) {
            result += ", ";
        }
        result += toDebugString(values[index]);
    }
    result += "]";
    return result;
}

inline string toDebugString(const vector<bool> &values) {
    string result = "[";
    for (size_t index = 0; index < values.size(); ++index) {
        if (index > 0) {
            result += ", ";
        }
        result += values[index] ? "true" : "false";
    }
    result += "]";
    return result;
}

template <typename T>
void expectEqual(const T &actual, const T &expected, const string &label) {
    if (!(actual == expected)) {
        throw runtime_error(label + " failed.\nExpected: " + toDebugString(expected) +
                            "\nActual:   " + toDebugString(actual));
    }
}

inline void expectNear(double actual, double expected, const string &label, double epsilon = 1e-5) {
    if (fabs(actual - expected) > epsilon) {
        throw runtime_error(label + " failed.\nExpected: " + toDebugString(expected) +
                            "\nActual:   " + toDebugString(actual));
    }
}

inline void expectVectorNear(const vector<double> &actual, const vector<double> &expected, const string &label,
                             double epsilon = 1e-5) {
    if (actual.size() != expected.size()) {
        throw runtime_error(label + " failed.\nExpected: " + toDebugString(expected) +
                            "\nActual:   " + toDebugString(actual));
    }

    for (size_t index = 0; index < actual.size(); ++index) {
        if (fabs(actual[index] - expected[index]) > epsilon) {
            throw runtime_error(label + " failed at index " + to_string(index) + ".\nExpected: " +
                                toDebugString(expected) + "\nActual:   " + toDebugString(actual));
        }
    }
}

inline void expectTrue(bool condition, const string &label, const string &details = "") {
    if (!condition) {
        throw runtime_error(details.empty() ? (label + " failed.") : (label + " failed.\n" + details));
    }
}

inline ListNode *makeList(const vector<int> &values) {
    ListNode dummy;
    ListNode *tail = &dummy;

    for (int value : values) {
        tail->next = new ListNode(value);
        tail = tail->next;
    }

    return dummy.next;
}

inline vector<int> listToVector(ListNode *head) {
    vector<int> values;
    while (head != nullptr) {
        values.push_back(head->val);
        head = head->next;
    }
    return values;
}

inline void destroyList(ListNode *head) {
    while (head != nullptr) {
        ListNode *next = head->next;
        delete head;
        head = next;
    }
}

// Build and serialize trees in the same level-order format LeetCode shows
// in examples: [1,2,3,null,4].
inline TreeNode *makeTree(const vector<optional<int>> &values) {
    if (values.empty() || !values[0].has_value()) {
        return nullptr;
    }

    TreeNode *root = new TreeNode(*values[0]);
    queue<TreeNode *> nodes;
    nodes.push(root);

    size_t index = 1;
    while (!nodes.empty() && index < values.size()) {
        TreeNode *current = nodes.front();
        nodes.pop();

        if (index < values.size() && values[index].has_value()) {
            current->left = new TreeNode(*values[index]);
            nodes.push(current->left);
        }
        ++index;

        if (index < values.size() && values[index].has_value()) {
            current->right = new TreeNode(*values[index]);
            nodes.push(current->right);
        }
        ++index;
    }

    return root;
}

inline vector<optional<int>> treeToLevelOrder(TreeNode *root) {
    if (root == nullptr) {
        return {};
    }

    vector<optional<int>> values;
    queue<TreeNode *> nodes;
    nodes.push(root);

    while (!nodes.empty()) {
        TreeNode *current = nodes.front();
        nodes.pop();

        if (current == nullptr) {
            values.push_back(nullopt);
            continue;
        }

        values.push_back(current->val);
        nodes.push(current->left);
        nodes.push(current->right);
    }

    while (!values.empty() && !values.back().has_value()) {
        values.pop_back();
    }

    return values;
}

inline void destroyTree(TreeNode *root) {
    if (root == nullptr) {
        return;
    }

    destroyTree(root->left);
    destroyTree(root->right);
    delete root;
}

inline void inorderTraversal(TreeNode *root, vector<int> &values) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left, values);
    values.push_back(root->val);
    inorderTraversal(root->right, values);
}

inline vector<int> treeInorder(TreeNode *root) {
    vector<int> values;
    inorderTraversal(root, values);
    return values;
}

inline TreeNode *findNode(TreeNode *root, int value) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->val == value) {
        return root;
    }

    if (TreeNode *left = findNode(root->left, value)) {
        return left;
    }
    return findNode(root->right, value);
}

inline bool isValidBST(TreeNode *root, long long lower = numeric_limits<long long>::min(),
                       long long upper = numeric_limits<long long>::max()) {
    if (root == nullptr) {
        return true;
    }
    if (root->val <= lower || root->val >= upper) {
        return false;
    }

    return isValidBST(root->left, lower, root->val) && isValidBST(root->right, root->val, upper);
}

inline void printTestsPassed() {
    cout << "All tests passed\n";
}

} // namespace leetcode
