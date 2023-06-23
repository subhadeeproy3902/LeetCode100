class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """

        num1 = self.extract_number(l1)
        num2 = self.extract_number(l2)

        result = num1 + num2

        # Convert the result back to a list of digits
        digits = [int(digit) for digit in str(result)][::-1]

        # Create the linked list from the list of digits
        head = ListNode(digits[0])
        current = head
        for digit in digits[1:]:
            new_node = ListNode(digit)
            current.next = new_node
            current = new_node

        return head

    def extract_number(self, linked_list):
        # Extract the digits from the linked list and build the number
        num = 0
        multiplier = 1
        while linked_list:
            num += linked_list.val * multiplier
            multiplier *= 10
            linked_list = linked_list.next

        return num