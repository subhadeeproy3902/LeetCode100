class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        kelvin = celsius + 273.15
        fahrenheit = celsius * 9/5 + 32
        ans = [round(kelvin, 5), round(fahrenheit, 5)]
        return ans