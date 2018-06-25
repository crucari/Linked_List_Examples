//example2

namespace LinkedList
{
    public class Node //definte node class

    public class MyList
    {
        public Node headNode;

        public MyList()
        {
            headNode = null;
        }

        public void AddToEnd(int data)
        {
            if (headNode == null)
            {
                headNode = new Node(data);
            }
            else
            {
                headNode.AddToEnd(data);
            }
            }
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
             Node myNode = new Node(7);  //creating a node
             myNode.AddToEnd(5);   //adding nodes to the list
             myNode.AddToEnd(11);
             myNode.AddToEnd(4);
             myNode.Print();
        }
    }
