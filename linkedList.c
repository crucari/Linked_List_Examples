namespace LinkedList
{
    public class Node //definte node class
    {


      public int data;  //declare data
      public Node next;  //reference to next node on list

      public Node(int i)  //constructor
      {
          data = i;
          next = null;  //next node set to null
      }
      public void Print()  //print method
      {
          Console.Write("|" + data + "|->");
          if (next !=null)  //if next node does not equal node, tell next node to print
          {
              next.Print();
          }
      }
      public void AddToEnd(int data)  //new method
      {
           if (next == null) //means we're at the end of the list
           {
               next = new Node (data);
           }
           else
           {
               next.AddToEnd(data);
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
    // Node myNode = new Node(7);  //also adds nodes to the list
    // myNode.next = new Node(5);  //not scalable
    // myNode.next.next = new Node(11);
    // myNode.next.next.next = new Node(4);

}
}
}

