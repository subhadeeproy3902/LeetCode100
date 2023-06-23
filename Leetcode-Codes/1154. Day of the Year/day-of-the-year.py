class Solution(object):
    def lpyear(self,year):
        if year % 4 == 0:
            if year % 100 == 0:
                if year % 400 == 0:
                    return True
                else:
                    return False
            else:
                return True
        else:
            return False


    def dayOfYear(self, date):
        """
        :type date: str
        :rtype: int
        """
        yy=date[:4]
        mm=date[5:7]
        dd=date[8:10]
        date=int(dd)
        month=int(mm)
        year=int(yy)
        day=0
        
        if self.lpyear(year):
            arr=[31,29,31,30,31,30,31,31,30,31,30,31]
            for i in range(0,month-1):
                day+=arr[i]
            day+=date
            return day
        
        else:
            arr=[31,28,31,30,31,30,31,31,30,31,30,31]
            for i in range(0,month-1):
                day+=arr[i]
            day+=date
            return day

        