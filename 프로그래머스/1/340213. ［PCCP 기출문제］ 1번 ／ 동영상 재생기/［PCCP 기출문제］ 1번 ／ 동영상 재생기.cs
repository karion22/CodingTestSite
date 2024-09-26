using System;

public class Solution {
    public string solution(string video_len, string pos, string op_start, string op_end, string[] commands) {
        
        
        TimeSpan time, start, end, len;
        GetTimeSpan(pos, out time);
        GetTimeSpan(op_start, out start);
        GetTimeSpan(op_end, out end);
        GetTimeSpan(video_len, out len);

        foreach (string cmd in commands)
        {
            if (time >= start && time <= end)
                time = end;

            if (cmd == "next")
            {
                time = time.Add(TimeSpan.FromSeconds(10));

                if (time > len)
                    time = len;
            }
            else if (cmd == "prev")
            {
                time = time.Add(TimeSpan.FromSeconds(-10));

                if (time.TotalSeconds < 10)
                    time = TimeSpan.Zero;
            }

            if (time >= start && time <= end)
                time = end;
        }
        return $"{time.Minutes:00}:{time.Seconds:00}";
    }
    
    bool GetTimeSpan(string inValue, out TimeSpan outTimeSpan)
    {
        outTimeSpan = TimeSpan.Zero;

        string[] parts = inValue.Split(':');
        if(parts.Length == 2 && int.TryParse(parts[0], out int minutes) && int.TryParse(parts[1], out int seconds))
        {
            outTimeSpan = new TimeSpan(0, minutes, seconds);
            return true;
        }
        return false;
    }
}