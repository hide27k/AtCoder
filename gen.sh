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
  cp /Users/hkomaki/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp ./
  cd "../"

  mkdir "b"
  cd "b"
  oj dl "https://atcoder.jp/contests/${1}/tasks/${1}_b"
  cp /Users/hkomaki/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp ./
  cd "../"

  mkdir "c"
  cd "c"
  oj dl "https://atcoder.jp/contests/${1}/tasks/${1}_c"
  cp /Users/hkomaki/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp ./
  cd "../"

  mkdir "d"
  cd "d"
  oj dl "https://atcoder.jp/contests/${1}/tasks/${1}_d"
  cp /Users/hkomaki/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp ./
  cd "../"

  mkdir "e"
  cd "e"
  oj dl "https://atcoder.jp/contests/${1}/tasks/${1}_e"
  cp /Users/hkomaki/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp ./
  cd "../"

  mkdir "f"
  cd "f"
  oj dl "https://atcoder.jp/contests/${1}/tasks/${1}_f"
  cp /Users/hkomaki/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp ./
  cd "../"
else 
  echo "Folder ${1} exists." 1>&2
  exit 1
fi

exit 0