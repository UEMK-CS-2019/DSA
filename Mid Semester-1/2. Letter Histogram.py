uniqueEle=[]
strInput=str(input())
strInput=strInput.lower()
strList=strInput.split()
for i in range(0,len(strList)):
    for j in range(0,len(strList[i])):
        if strList[i][j] not in uniqueEle:
               uniqueEle.append(strList[i][j])
uniqueEle=sorted(uniqueEle)
for i in range(0,len(uniqueEle)):
    total=strInput.count(uniqueEle[i])
    print(f"{uniqueEle[i]} | {'*'*total}")
