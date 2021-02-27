# Shell Readme

## Navigating Using Shell

- To list the current working directory:
	```
	pwd
	```
- To list files and directories in current working directory:
	```
	dir
	```
- To clear the screen of the shell:
	```
	clr
	```
- To change the current working directory:
	```
	cd <directory name>
	```
	If directory name is not given, the shell will stay in the current directory <br>
	If the directory name passed does not exist in the current working directory and error will be reported

- To list all environment strings:
	```
	environ
	```

- To display a message on the screen:
	```
	echo <message>
	```

- To display the manual for the shell:
	```
	help
	```

- To pause all shell operations:
	```
	pause
	```

- To exit/quit the shell:
	```
	quit
	```

## I/O Redirection
- Shells provides command for operations known as I/O redirection. These commands allow for standard output and input to files. The shell will read the filenames provided and using one of the redirection operators provided, the shell will execute input or output to the target file. <br>

- The single bracket operators for redirection are as follows:
	```
	> - standard output
	< - standard input

	e.g program-name arg1 arg2 < inputfile > outputfile
	```
	These operators overwrite the contents in the destination file.

- The double bracket operators for redirection are as follows:
	```
	>> - standard output
	<< - standard input

	e.g program-name arg1 arg2 << inputfile >> outputfile
	```
	These operators do not overwrite file contents in existing destination files.

## Background Program Execution
- Programs ran in the shell become linked to each other. This may cause an issue where if the terminal is closed the programming being executed also halts all operation since part of the link between the terminal and program is missing.

- To avoid this error the ampersand character can be used at the end of the command to detach the terminal from the program.
	```
	program_name &
	```

##
