// Letter combinations
// give me a sec

void perms(string prev_letters, vector<string> group_letters_left, vector<string> &results) {
    if (group_letters_left.empty()) results.push_back(prev_letters);

    for (auto let : group_letters_left[0]) {
        
    }
}

int main() {
    string digits = "23"; // Not needed
    
    vector<string> lets_in_nums = {"abc","def","ghi","jkl","mno","pqr","stu","wxyz",};
    for (auto let : digits) {
        //cout << let << "\n";

        int val = atoi(&let) - 2;
        cout << lets_in_nums[val] << "\n";
        
        

    }
    
} 
