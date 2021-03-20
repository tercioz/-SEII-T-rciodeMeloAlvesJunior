import os
os.chdir('/Users/Tércio/Desktop')
for f in os.listdir():
    file_name,file_ext=os.path.splitext(f)
    f_title,f_course,f_num=f_name.split('-')
    f_title=f_title.strip()
    f_course=f_course.strip()
    f_num=f_num.strip()
    