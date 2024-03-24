// Node is defined as:
// class Node{
//     int val;
//     Node next;
//     Node(int x){
//     	val = x; next = null;
//     }
// }
class Solution{
    static int solve(Node root){
        Node prev = root;
        Node curr = root.next;
        Node coming = root.next.next;
        int count = 0;
        while(curr.next != null){
            if(prev.val < curr.val && coming.val < curr.val){
                count++;
            }
            else if(prev.val > curr.val && coming.val > curr.val){
                count++;
            }
            prev = prev.next;
            curr = curr.next;
            coming = coming.next;
        }
        return count;
    }
}
