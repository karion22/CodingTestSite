using System;
using System.Text;

public class Example
{
    public static void Main()
    {
        String[] s;

        Console.Clear();
        s = Console.ReadLine().Split(' ');

        int n = Int32.Parse(s[0]);
        
        for(int i = 0; i < n; i++)
        {
            StringBuilder sb = new StringBuilder();
            for(int h = 0; h <= i; h++)
            {
                sb.Append("*");
            }
            Console.WriteLine("{0}", sb.ToString());
        }
    }
}