#!/bin/bash
#Shell Script de compilacion de listarec
ACTUAL=$PWD
cd ../../bin 
BIN=`pwd`
cd $ACTUAL
cd ../incl
INCL=$PWD/
cd $ACTUAL
make $* RUTA_BIN=$BIN/ RUTA_INCL=$INCL/ 
