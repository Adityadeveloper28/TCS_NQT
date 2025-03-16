// Include necessary header files
#include <iostream>    // For input/output operations (cout, cin)
#include <vector>      // For using dynamic arrays (vector)
#include <unordered_set>  // For hash-based set operations (not used in this code)
#include <unordered_map>  // For hash-based mapping of skills to indices
using namespace std;   // Using the standard namespace to avoid std:: prefix

// Main algorithm function that finds the smallest team with all required skills
// Parameters:
// - req_skills: vector of skills needed for the project
// - people: 2D vector where each inner vector contains skills of one person
// Returns: vector of indices representing the optimal team members
vector<int> smallestSufficientTeam(vector<char>& req_skills, vector<vector<char>>& people) {
    int n = req_skills.size();  // Get the total number of required skills
    unordered_map<char, int> skill_index;  // Map to store each skill's position in bitmask
    
    // Assign an index to each skill for bit manipulation
    for (int i = 0; i < n; i++) {
        skill_index[req_skills[i]] = i;  // Maps each skill to its position (0,1,2...)
    }
    
    // Dynamic programming array where:
    // - Index is a bitmask representing a set of skills
    // - Value is the smallest team that has those skills
    vector<vector<int>> dp(1 << n);  // Size 2^n to represent all possible skill combinations
    dp[0] = {};  // Base case: empty skill set requires empty team
    
    // Process each person one by one
    for (int i = 0; i < people.size(); i++) {
        int skill_mask = 0;  // Bitmask to represent this person's skills
        
        // Build the skill bitmask for the current person
        for (const char& skill : people[i]) {
            if (skill_index.count(skill)) {  // Check if this skill is relevant
                skill_mask |= (1 << skill_index[skill]);  // Set the bit for this skill
            }
        }
        
        // Try adding this person to all previously computed teams
        for (int prev = 0; prev < (1 << n); prev++) {
            if (dp[prev].empty() && prev != 0) continue;  // Skip unreachable skill combinations
            
            int comb = prev | skill_mask;  // New skill combination after adding this person
            if (comb == prev) continue;  // Skip if person adds no new skills
            
            // Update if we haven't found a team for this skill combination yet
            // or if adding this person creates a smaller team
            if (dp[comb].empty() || dp[comb].size() > dp[prev].size() + 1) {
                dp[comb] = dp[prev];  // Copy the previous best team
                dp[comb].push_back(i);  // Add this person
            }
        }
    }
    
    // Return the smallest team that has all required skills
    // (1 << n) - 1 creates a bitmask with all n bits set to 1
    return dp[(1 << n) - 1];
}

int main() {
    // Example 1: Simple case with 3 skills and 4 people
    vector<char> req_skills1 = {'a', 'b', 'c'};  // Required skills for project 1
    vector<vector<char>> people1 = {
        {'a'},        // Person 0 has skill 'a'
        {'b'},        // Person 1 has skill 'b'
        {'b', 'c'},   // Person 2 has skills 'b' and 'c'
        {'a', 'b'}    // Person 3 has skills 'a' and 'b'
    };
    
    // Find optimal team for example 1
    vector<int> team1 = smallestSufficientTeam(req_skills1, people1);
    
    // Output results for example 1
    cout << "Example 1:" << endl;
    cout << "Required skills: a, b, c" << endl;
    cout << "Minimum team size: " << team1.size() << endl;
    cout << "Team members: ";
    for (int idx : team1) {
        cout << idx << " ";  // Print each team member's index
    }
    cout << endl << endl;
    
    // Example 2: More complex case with 6 skills and 6 people
    vector<char> req_skills2 = {'a', 'b', 'c', 'd', 'e', 'f'};  // Required skills for project 2
    vector<vector<char>> people2 = {
        {'a', 'b', 'c'},  // Person 0 has skills a, b, c
        {'a', 'b', 'd'},  // Person 1 has skills a, b, d
        {'c', 'e', 'f'},  // Person 2 has skills c, e, f
        {'d', 'e'},       // Person 3 has skills d, e
        {'e', 'b'},       // Person 4 has skills e, b
        {'f', 'c'}        // Person 5 has skills f, c
    };
    
    // Find optimal team for example 2
    vector<int> team2 = smallestSufficientTeam(req_skills2, people2);
    
    // Output results for example 2
    cout << "Example 2:" << endl;
    cout << "Required skills: a, b, c, d, e, f" << endl;
    cout << "Minimum team size: " << team2.size() << endl;
    cout << "Team members: ";
    for (int idx : team2) {
        cout << idx << " ";  // Print each team member's index
    }
    cout << endl;
    
    return 0;  // Indicate successful program execution
}