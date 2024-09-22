class Node
    def _init_(self, d):
       self.data=d
       self.left=None
       self.right=None

  firstNode=Node(2)
  secondNode=Node(3)
  thirdNode=Node(4)
  fourthNode=Node(5)

firstNode.left=secondNode
firstNode.right=thirdNode
secondNoe.left=fourthNode
