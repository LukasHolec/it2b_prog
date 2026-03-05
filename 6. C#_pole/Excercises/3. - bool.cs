/* class Program
{
    static void Main()
    {
        Console.Write("Zadej desetinne cislo: ")ů
        int vstup = int.Parse(Console.ReadLine());


        bool vyrok = false;

        while (vyrok) 
        {
            Console.Write('a');
        }
    }
} */

class Program
{

    static bool Trojuhlenik(int a, int b, int c)
    {
        return (a + b > c && a + c > b && c + b > a);
    }


    static void Main()
    {
        Console.WriteLine("Zadej 1. odvěsnu trojuhleniku:");
        int a = int.Parse(Console.ReadLine());

        Console.WriteLine("Zadej 2. odvěsnu");
        int b = int.Parse(Console.ReadLine());


        Console.WriteLine("Zadej přeponu");
        int c = int.Parse(Console.ReadLine());

            if (Trojuhlenik(a, b, c)) {
                Console.WriteLine("Trojuhlenik lze sestavit");
            }
            else
            {
                Console.WriteLine("Trojuhlenik nelze sestavit");
            } 

    }    
}