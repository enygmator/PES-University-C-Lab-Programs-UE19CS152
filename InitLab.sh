#!/bin/bash

#init variables
CCODE_PREFILLED="Y"
NUM_PROG=0
START_NUM=1
SINGLE_FILE=0
MAKEFILE=1
SINGLE_MAKE=0

#take inputs:
echo "How many programs do you want to write?"
read NUM_PROG
echo "What is the number of first program? (subsequent numbers will be given to the rest of the files)"
read START_NUM
echo "Which style do you want?"
select STYLE in "Client-Server" "Single-File"
do
case $STYLE in
    "Client-Server")
    SINGLE_FILE=0
    break
    ;;
    "Single-File")
    SINGLE_FILE=1
    break
    ;;
    *)
    echo "Invalid input"
    ;;
esac
done
if [ $SINGLE_FILE == 0 ]
then
    echo "Do you want makefile? Y/N"
    read MAKEFILE
    if [ $MAKEFILE == "y" -o $MAKEFILE == "Y" ]
    then
        MAKEFILE=1
        echo "How should make file be generated?"
        select MAKE_STYLE in "Single make file with arguements" "Multiple make files"
        do
        case $MAKE_STYLE in
            "Single make file with arguements")
            SINGLE_MAKE=1
            break
            ;;
            "Multiple make files")
            SINGLE_MAKE=0
            break
            ;;
            *)
            echo "Invalid input"
            ;;
        esac
        done
    else
        MAKEFILE=0
    fi
fi
echo "Do you want C code to be filled in? Y/N"
read CCODE_PREFILLED
if [ $CCODE_PREFILLED == "Y" -o $CCODE_PREFILLED == "y" ]
then
CCODE_PREFILLED=1
else
CCODE_PREFILLED=0
fi

#Create files
while [ $NUM_PROG -gt 0 ]
do
    FILENO=`expr $NUM_PROG + $START_NUM - 1`

    if [ $SINGLE_FILE == 1 ]
    then
        touch "$FILENO.c"
        if [ $CCODE_PREFILLED == 1 ]
        then
            echo -e "#include<stdio.h>\n\nint main()\n{\n\t\n\t\n\treturn 0;\n}" > "$FILENO.c"
        fi
    else
        CLIENTSTR=$FILENO
        CLIENTSTR+="client"
        SERVERSTR=$FILENO
        SERVERSTR+="server"
        touch "$CLIENTSTR.c"
        touch "$SERVERSTR.c"
        touch "$SERVERSTR.h"
        if [ $CCODE_PREFILLED == 1 ]
        then
            echo -e "#include<stdio.h>\n#include\"$SERVERSTR.h\"\n\nint main()\n{\n\t\n\t\n\treturn 0;\n}" > "$CLIENTSTR.c"            
            echo -e "#include<stdio.h>\n#include\"$SERVERSTR.h\"\n\n" > "$SERVERSTR.c"
        fi
        if [ $SINGLE_MAKE == 0 -a $MAKEFILE == 1 ]
        then
            touch "$FILENO.mk"
            echo -e "a.out : $CLIENTSTR.o $SERVERSTR.o\n\tgcc \$? -o \$@\n$CLIENTSTR.o : $CLIENTSTR.c $SERVERSTR.h\n\tgcc -c \$?\n$SERVERSTR.o : $SERVERSTR.c $SERVERSTR.h\n\tgcc -c \$?\nclean:\n\trm -f *.o *.h.gch a.out" > "$FILENO.mk"
        fi
    fi

    NUM_PROG=`expr $NUM_PROG - 1`
done

if [ $SINGLE_MAKE == 1 -a $MAKEFILE == 1 ]
then
    touch "run.mk"
    echo -e "a.out : \$(FILENO)client.o \$(FILENO)server.o\n\tgcc \$? -o \$@\n\$(FILENO)client.o : \$(FILENO)client.c \$(FILENO)server.h\n\tgcc -c \$?\n\$(FILENO)server.o : \$(FILENO)server.c \$(FILENO)server.h\n\tgcc -c \$?\nclean:\n\trm -f *.o *.h.gch a.out" > "run.mk"
    echo "To use the run.mk file, you need to give an arguement. (like if you want to compile program 4, then type -> make -f run.mk FILENO=4 )"
fi

echo "All operations seem to have completed successfully"