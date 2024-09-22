struct Node{
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *creatNode(int d){
  struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=d;
  newNode->left=NULL;
  newNode->right=NULL:
  return newNode;
}

int main(){
  struct Node* firstNode = creatNode(2);
  struct Node* secondNode = creatNode(3);
  struct Node* thirdNode = creatNode(4);
  struct Node* fourthNode = creatNode(5);

  firstNode->left=secondNode;
  firstNode->right=thirdNode;
  secondNode->left=fourthNode;

  return 0;
}
