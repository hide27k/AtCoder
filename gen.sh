#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Please choose one specific ABC." 1>&2
  exit 1
fi

if [ ! -e "./${1}" ]; then
  mkdir $1
  cd $1
  mkdir "a"
  cd "a"
  oj dl "https://atcoder.jp/contests/${1}/tasks/${1}_a"
  cd "../"

  mkdir "b"
  cd "b"
  oj dl "https://atcoder.jp/contests/${1}/tasks/${1}_b"
  cd "../"

  mkdir "c"
  cd "c"
  oj dl "https://atcoder.jp/contests/${1}/tasks/${1}_c"
  cd "../"

  mkdir "d"
  cd "d"
  oj dl "https://atcoder.jp/contests/${1}/tasks/${1}_d"
  cd "../"
else 
  echo "Folder ${1} exists." 1>&2
  exit 1
fi

exit 0