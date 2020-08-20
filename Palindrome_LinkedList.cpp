void reverse(ListNode** head_ref) 
{ 
    ListNode* prev = NULL; 
    ListNode* current = *head_ref; 
    ListNode* next; 
    while (current != NULL) { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    *head_ref = prev; 
} 


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow=head, *fast = head,*temp=head,*mid=NULL;
        while(fast !=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        mid = slow;
        
        // reverse after mid.
        reverse(&mid);
        
        while(temp!=NULL && mid!=NULL){
            if(temp->val != mid->val) return false;
            temp = temp->next;
            mid = mid->next;
        }
        
        return true;
        
//         vector<int> v;
        
//         ListNode* temp = head;
//         int c=0;
//         while(temp!= NULL){
//             v.push_back(temp->val);
//             temp=temp->next;
//             c++;
//         }
//         for(int i=0;i<c;i++)cout<<v[i];
//         temp= head;
        
//         int i=0,j=c-1;
//         while(i<j){
//             if(v[i] != v[j]) return false;
//             i++;
//             j--;
//         }
//         return true;
    }
};