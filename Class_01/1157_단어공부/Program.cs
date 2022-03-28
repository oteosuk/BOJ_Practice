using System;

namespace _000_BOJPractice
{
    class Program
    {
        static int[] answer = new int[26];
        static char[] max = new char[26];

        static void Count(string s)
        {
            for (int i = 0; i < s.Length; i++)
            {
                for (int j = 0; j < max.Length; j++)
                {
                    if (s[i] == max[j])
                    {
                        answer[j]++;
                    }
                }
            }
        }

        static char Result()
        {
            int num = 0;
            int high = 0;
            bool same = false;
            for (int i = 0; i < answer.Length; i++)
            {
                if (answer[i] == high && answer[i] != 0)
                {
                    same = true;
                }

                if (answer[i] > high)
                {
                    high = answer[i];
                    num = i;
                    same = false;
                }
            }
            if (same)
            {
                return '?';
            }
            else
            {
                return max[num];
            }
        }
        static void Main()
        {
            for (int i = 0; i < 26; i++)
            {
                max[i] = (char)((int)'A' + i);
            }

            string text = Console.ReadLine().ToUpper();
            Count(text);
            Console.WriteLine(Result());
        }
    }
}