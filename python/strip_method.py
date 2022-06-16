from xml.etree.ElementInclude import DEFAULT_MAX_INCLUSION_DEPTH


name="       Sac       hin          "
dots="............."
print(name+dots)
#lstrip() method
Left_strip=name.lstrip()
print(Left_strip+dots)
#rstrip()
right_strip=name.rstrip()
print(right_strip+dots)
#strip() method
strip=name.strip()#it will remove all space left and right side
print(strip+dots)
#ALL ABOVE METHOD CAN NOT REMOVE THE SPACE BETWEEN THE CHARACTERS

#replace methods
replace=name.replace(" ","")#between first  "" describe what do uh wanna replace and second "" determine by whom you wanna replace it.
print(replace+dots)