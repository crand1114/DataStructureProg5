struct course{
    int courseNumber;
    int counter;
};

typedef course ElementType;
class node
{
    friend class BinarySearchTree;
private:
    ElementType data;
    node * leftchild;
    node * rightchild;
};

class BinarySearchTree
{
public:
    BinarySearchTree();
    bool empty(); // return true if the tree is empty, otherwise return false
    void Insert(ElementType x);//insert a value x
    bool IsThere (ElementType x);//return true if x is in the tree, otherwise return false
    void Delete(ElementType x); //if value x is in the tree, remove x
    void Display();// Display the data values stored from smallest to largest



private:
    node * root;//pointer to the roor node
    bool IsThere(node*& xParent, node*& xNode);
    void Display(node*currentNode);
    void DeleteAllOnes(node*p);
    void Righty(node*& rightyP, node*& righty);

};