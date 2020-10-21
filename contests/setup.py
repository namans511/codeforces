import os

str1 = input('enter round number ')
str2 = input("enter div ")
contest_name = "Codeforces Round #"+str1+" (Div. "+str2+")"

parent_path = os.getcwd()
folder_name = os.path.join(parent_path,contest_name)
os.mkdir(folder_name)

fname = open('template.txt', "r")
template_txt = fname.read().strip()
fname.close()

for i in ["A","B","C","D"] :
	file = i + ".cpp"
	file = os.path.join(folder_name,file)
	fname = open(file,"a")
	fname.write(template_txt)
	fname.close()

command = 'cd "{}"; subl A.cpp B.cpp C.cpp D.cpp input.txt output.txt error.txt'.format(folder_name)
os.system(command)
