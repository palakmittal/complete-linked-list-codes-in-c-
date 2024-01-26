//APPROACH=> TORTOISE HARE ALGORITHM
/*
    STEP1: CHECK IF THE LOOP IS PRESENT OR NOT USING TORTOISE ALGO
    STEP2: INITIALIZE NOW SLOW=HEAD . DONT CHANGE FOR THE FAST POINTER
    STEP3: INCREASE SLOW AND FAST BY ONLY ONE STEP
    STEP4: THE POINT WHERE THEY  NOW MEET IS THE STARTING POINT OF LOOP


*/

// solution




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        int flag=0;
         ListNode* slow=head;
     ListNode* fast=head;
      ListNode* temp=NULL;
     // step1
     while(fast!= NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            flag=1;
        break;
        }
     }
        if(flag==0){
            return temp;
        }
        
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            temp=slow;
            fast=fast->next;
        }
   
  return slow;
    }
};





