#!/usr/bin/env bash

LANGUAGES=""

echo "git checkout -b update/$1" | sh
echo "git add ." | sh
echo "git commit -m \"chore: updated submodule to $1\"" | sh
for language in $LANGUAGES; do
    echo "rm $language/ -rf" | sh
    echo "openapi-generator generate -i ./Bookkeeping/spec/openapi.yaml -g $language -o $language" | sh
    echo "git add $language/" | sh
    echo "git commit -m \"chore: generated $language client\"" | sh
done

echo "git checkout master" | sh
echo "git merge update/$1 --no-ff" | sh
echo "git branch -D update/$1" | sh
echo "git push" | sh
