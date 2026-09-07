#! /bin/bash

if ! [[ -x shhh ]]; then
    echo "shhh executable does not exist"
    exit 1
fi

../tester/run-tests.sh $*


