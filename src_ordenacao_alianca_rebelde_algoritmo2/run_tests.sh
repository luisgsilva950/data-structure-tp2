EXEC=$1
TMP_OUT=$2

for i in {0..6..1}; do
  testname=$(printf "%d" "$i")
  time $EXEC < ../tests/$testname.in > $TMP_OUT
  if ! diff -qwB ../tests/$testname.out $TMP_OUT &>/dev/null; then
    echo "Test $testname failed"
  else
    echo "Test $testname passed"
  fi
done
rm $TMP_OUT