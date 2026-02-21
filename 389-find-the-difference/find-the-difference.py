class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        sdict ={}
        tdict ={}
        for x in s:
            if x not in sdict:
                sdict[x]=1
            else:
                sdict[x] = sdict.get(x)+1
        for y in t:
            if y not in tdict:
                tdict[y]=1
            else:
                tdict[y]= tdict.get(y)+1
        for z in t:
            if sdict.get(z)!=tdict.get(z) or z not in sdict:
                return z
            else:
                continue
        return None


        