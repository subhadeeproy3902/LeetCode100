class Solution(object):
    def discountPrices(self, sentence, discount):
        """
        :type sentence: str
        :type discount: int
        :rtype: str
        """
        words = sentence.split()
        ms = []
        for i in words:
            if i.startswith('$') and i[1:].isdigit():
                poisa = float(i[1:])
                besi_poisa = '{:.2f}'.format(poisa * (1- (float(discount) / 100)))
                ms.append('$' + besi_poisa)
            else:
                ms.append(i)
        return ' '.join(ms)