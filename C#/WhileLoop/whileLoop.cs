using System;
namespace WhileLoop
{
  class WhileLoop
  {
    static void Main ()
    {
      string userIsDone = " ";

      while (userIsDone.ToLower() != "yes")
      {
      Console.Write("Are you done? [Yes] [No]: ");
      userIsDone = Console.ReadLine();
      Console.WriteLine("You are in while loop");
          
      }
    }
  }
}
