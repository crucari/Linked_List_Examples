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

            public void Print()
            {
                if (headNode != null)
                {
                    headNode.Print();
                }

            }

    class Program
    {
        static void Main(string[] args)
        {
            MyList list = new MyList();
             myNode.AddToEnd(9);
             myNode.AddToEnd(5);
             myNode.AddToEnd(7);
             myNode.AddToEnd(11);
             list.Print();

        }


            //  Node myNode = new Node(7);  //creating a node
            //  myNode.AddToEnd(5);   //adding nodes to the list
            //  myNode.AddToEnd(11);
            //  myNode.AddToEnd(4);
            //  myNode.Print();
        }
    }
