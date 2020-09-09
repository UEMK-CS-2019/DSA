import json
str1 = input()
str2 = input()
str3 = input()

st1 = eval(str1)
st2 = eval(str2)
st3 = eval(str3)
st = {}
st.update(st1)
st.update(st2)
st.update(st3)
print (st)
