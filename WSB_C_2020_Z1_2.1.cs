using System;

namespace WSB_C_2020_Z1_2._1
{
    class Program
    {
        static void Main(string[] args)
        {
            
            string p;
            int x, y;
            double silnia = 1;
            do
            {
                silnia = 1;
                Console.WriteLine("Podaj liczbe, ktorej silnie chcesz wyliczyc, lub wpisz exit by wyjsc.");
                p = Console.ReadLine();
                if (int.TryParse(p, out y) == true)
                {

                    if (y > int.MaxValue && y < int.MinValue)
                    {
                        Console.WriteLine("Wprowadzono niepoprawna wartosc.");
                        Console.WriteLine("################################");
                    }
                    else if (y < 0)
                    {
                        Console.WriteLine("Nie mozna policzyc silni z liczby ujemnej.");
                        Console.WriteLine("################################");
                    }
                    else if (y == 0)
                    {
                        Console.WriteLine(silnia);
                        Console.WriteLine("################################");
                    }
                    else if (y <= 170)
                    {
                        for (x = y; x > 1; x--)
                        {
                            silnia *= x;
                        }
                        Console.WriteLine("Slinia liczby " + y + " rowna jest " + silnia + ".");
                        Console.WriteLine("################################");
                    }
                    else if (y > 170)
                    {
                        Console.WriteLine("Liczba wieksza od " + double.MaxValue);
                        Console.WriteLine("################################");
                    }
                    else
                    {
                        Console.WriteLine("Wprowadzono niepoprawna wartosc.");
                        Console.WriteLine("################################");
                    }
                }
                else
                {
                    if (p != "exit")
                    {
                        Console.WriteLine("Wprowadzono niepoprawna wartosc.");
                        Console.WriteLine("################################");
                    }
                    }
            } while (p != "exit");
    }   }
}
