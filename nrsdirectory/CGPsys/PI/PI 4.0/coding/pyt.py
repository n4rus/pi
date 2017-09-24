#py doc

ce = raw_input() # 4-remove

cen = bash(grep ce) # select-to-remove

cm = bash(cat - cen)  # copy-modified

file_path = raw_input()

f = folder($PATH = (file_path))

nff = raw_input() #new_folder/file

for x in f:
    copy cm to nff;
