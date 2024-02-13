CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

# Make sure you have targets for test and clean!

# The test target should depend on the executable file you make
# for this lab. 

# Therefore, you need either an explicit or implicit target for
# the executable file. If your code is in a single C file,
# and the executable file has the same name as the single C file,
# make has implicit rules to build the executable for you.

# The clean target should remove anything make has created
# for you. Most of the time, this will just be your executable
# file. Remmber, you can use -rm instead of rm so that if the
# rm command "fails" because your executable file is not there,
# the make command will not treat this as an error.