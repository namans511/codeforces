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

file3 = "input.txt"
file3 = os.path.join(folder_name,file3)
fname = open(file3,"a")
fname.close()

file4 = "output.txt"
file4 = os.path.join(folder_name,file4)
fname = open(file4,"a")
fname.close()

file5 = "error.txt"
file5 = os.path.join(folder_name,file4)
fname = open(file5,"a")
fname.close()

command = 'cd "{}"; subl A.cpp B.cpp C.cpp input.txt output.txt error.txt'.format(folder_name)
os.system(command)