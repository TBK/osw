#!/bin/sh

# Default or user input
if [ -z "$1"]; then
    VERSION="1559784175"
else
    VERSION=$1
fi

# DL the files
wget --no-parent -r http://osw.didrole.com/src/$VERSION/

# Cleanup
mv osw.didrole.com/src/$VERSION .
rmdir -p osw.didrole.com/src/
rm $VERSION/index.html*
