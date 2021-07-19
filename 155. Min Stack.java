class MinStack {

    /** initialize your data structure here. */
    CustomListNode current;
	
    public void push(int val) {
        current = new CustomListNode(val, (current == null)? val : Math.min(current.min, val), current);
    }

    public void pop() {
        current = current.next;
    }

    public int top() {
        return current.val;
    }

    public int getMin() {
        return current.min;
    }
    class CustomListNode {
        public int val;
        public int min;
        public CustomListNode next;
        public CustomListNode(int val, int min, CustomListNode next) { this.val = val; this.next = next; this.min = min; }
    }
    public MinStack() {
        
    }
    

}
