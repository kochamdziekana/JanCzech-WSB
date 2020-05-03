using System;

namespace WSB_C_2020_Z1_5
{
    
    public class Kalkulator
    {
        public
        void menu()
        {
            string wybor, c, d;
            int a, b, wybrana, wynik;
            Console.WriteLine("Witaj! Co chcialbys zrobic?");
            Console.WriteLine("#######################");
            Console.WriteLine("1. Dodawanie.");
            Console.WriteLine("2. Odejmowanie.");
            Console.WriteLine("3. Mnozenie.");
            Console.WriteLine("4. Dzielenie.");
            Console.WriteLine("5. Zakoncz.");
            Console.WriteLine("#######################");
            wybor = Console.ReadLine();
            Console.WriteLine("#######################");
            wybrana = int.Parse(wybor);

            menu2(wybrana);
        }

        void menu2(int wybrana)
        {
            string c, d;
            int a, b, wynik;
            switch (wybrana)
            {
                case 1:
                    Console.WriteLine("Podaj dwie liczby, ktore chcesz dodac.");
                    c = Console.ReadLine();
                    d = Console.ReadLine();
                    a = int.Parse(c);
                    b = int.Parse(d);
                    wynik = a + b;
                    Console.WriteLine(a + " + " + b + " = " + wynik);
                    Console.WriteLine("#######################");
                    menu();
                    break;
                case 2:
                    Console.WriteLine("Podaj dwie liczby, ktore chcesz odjac.");
                    c = Console.ReadLine();
                    d = Console.ReadLine();
                    a = int.Parse(c);
                    b = int.Parse(d);
                    wynik = a - b;
                    Console.WriteLine(a + " - " + b + " = " + wynik);
                    Console.WriteLine("#######################");
                    menu();
                    break;
                case 3:
                    Console.WriteLine("Podaj dwie liczby, ktore chcesz pomnozyc.");
                    c = Console.ReadLine();
                    d = Console.ReadLine();
                    a = int.Parse(c);
                    b = int.Parse(d);
                    wynik = a * b;
                    Console.WriteLine(a + " * " + b + " = " + wynik);
                    Console.WriteLine("#######################");
                    menu();
                    break;
                case 4:
                    Console.WriteLine("Podaj dwie liczby, ktore chcesz podzielic.");
                    c = Console.ReadLine();
                    d = Console.ReadLine();
                    a = int.Parse(c);
                    b = int.Parse(d);
                    if (b == 0)
                    {
                        Console.WriteLine("Nie mozna dzielic przez 0.");
                        Console.WriteLine("#######################");
                        menu();
                        break;
                    }
                    wynik = a / b;
                    Console.WriteLine(a + " * " + b + " = " + wynik);
                    Console.WriteLine("#######################");
                    menu();
                    break;
                case 5:
                    Console.WriteLine("Do widzenia :----)");
                    break;
                default:
                    Console.WriteLine("Nieprawidlowa komenda.");
                    Console.WriteLine("#######################");
                    menu();
                    break;
            }
        }
    }
    
    
    class Program
    {
        static void Main(string[] args)
        {
            Kalkulator calc = new Kalkulator();
            calc.menu();
        }
    }
}
