class Solution {
    public ListNode deleteDuplicates(ListNode head) {
           if(head==null||head.next==null) return head;
	ListNode p=head,q=head.next;
	while(q!=null){
		if(q.val==p.val){
			p.next=q.next;
			q=p.next;
		}
		else{
			p=p.next;
			q=q.next;
		}
	}
	return head;
    }
}
