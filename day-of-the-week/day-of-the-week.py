class Solution:
    def dayOfTheWeek(self, day: int, month: int, year: int) -> str:
        days = 0 
        week = ["Friday","Saturday","Sunday", "Monday","Tuesday","Wednesday", "Thursday"]
        def leapYear(y):
            if(y%4==0 and y%100!=0 or y%400==0):
                return 1 
            else:
                return 0 
        for i in range(1971,year):
            days += 365+leapYear(i)
        
        for i in range(1,month):
            if(leapYear(year)==1 and i==2):
                days += 29
            elif(leapYear(year)==0 and i==2):
                days += 28
            elif(i==1 or i==3 or i==5 or i==7 or i==8 or i==10 or i==12):
                days += 31
            else:
                days += 30
        days += day
        days = days%7 -1 
        return week[days]