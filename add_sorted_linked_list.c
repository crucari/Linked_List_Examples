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

      public void AddSorted(int data)
      {

      }