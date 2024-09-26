using System;
using System.Collections.Generic;

public class Solution {
        public struct Point
        {
            public int r;
            public int c;

            public Point(int r, int c)
            {
                this.r = r;
                this.c = c;
            }
        }
        public class Info
        {
            public int time;
            public int count;

            public Info(int time, int count)
            {
                this.time = time;
                this.count = count;
            }

            public void IncreseCount()
            {
                this.count += 1 ;
            }
        }
    
    public int solution(int[,] points, int[,] routes) {
        
            int answer = 0;

            int rowCnt = routes.GetLength(0);
            int columnCnt = routes.GetLength(1);
            var board = new Dictionary<Point, List<Info>>();
            board.Clear();

            // List 구성
            int timer = 0;
            for(int r = 0; r < rowCnt; r++)
            {
                timer = 0;
                var queue = new Queue<Point>();
                for(int c = 0; c < columnCnt; c++)
                    queue.Enqueue(new Point(points[routes[r, c] - 1, 0], points[routes[r, c] -1, 1]));

                var currPos = queue.Dequeue();
                while(queue.Count > 0)
                {
                    List<Info> res;
                    if (board.TryGetValue(currPos, out res))
                    {
                        var idx = res.FindIndex(value => value.time == timer);
                        if (idx < 0)
                        {
                            board[currPos].Add(new Info(timer, 1));
                        }
                        else
                        {
                            if (res[idx].time == timer)
                            {
                                if (board[currPos][idx].count == 1)
                                    answer++;
                            }

                            board[currPos][idx].IncreseCount();
                        }
                    }
                    else
                    {
                        board[currPos] = new List<Info>
                        {
                            new Info(timer, 1)
                        };
                    }

                    var targetPos = queue.Peek();
                    if (currPos.r == targetPos.r && currPos.c == targetPos.c)
                    {
                        queue.Dequeue();
                        if (queue.Count > 0)
                            targetPos = queue.Peek();
                    }

                    if (currPos.r != targetPos.r)
                        currPos.r += Math.Sign(targetPos.r - currPos.r);
                    else if (currPos.c != targetPos.c)
                        currPos.c += Math.Sign(targetPos.c - currPos.c);

                    timer++;
                }
            }
        return answer;
    }
}